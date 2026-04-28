#include <SPI.h>
#include <MFRC522.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClientSecure.h>

#define RST_PIN D3
#define SS_PIN  D4
#define BUZZER  D0

MFRC522 mfrc522(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;

int blockNum = 2;

byte bufferLen = 18;
byte readBlockData[18];
MFRC522::StatusCode status;

// ===== WiFi & Sheet =====
const char* ssid = "zubair";
const char* password = "12345678";
const String sheet_url = "sheet url to be written here ";

void setup() {
  Serial.begin(9600);
s
  pinMode(BUZZER, OUTPUT)

  WiFi.begin(ssid, password);

  Serial.print("Connecting WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(300);
  }

  Serial.println("\nWiFi Connected");

  SPI.begin();
  mfrc522.PCD_Init();
}

void loop() {

  mfrc522.PCD_Init();

  if (!mfrc522.PICC_IsNewCardPresent()) return;
  if (!mfrc522.PICC_ReadCardSerial()) return;

  Serial.println("\nCard Detected");

  ReadDataFromBlock(blockNum, readBlockData);

  // ================= RAW DATA =================
  String rawData = "";

  for (int i = 0; i < 16; i++) {
    if (readBlockData[i] != 0) {
      rawData += (char)readBlockData[i];
    }
  }

  rawData.trim();
  Serial.println("RAW: " + rawData);

  // ================= SPLIT DATA =================
  int firstDash = rawData.indexOf('-');
  int secondDash = rawData.indexOf('-', firstDash + 1);

  String name = rawData.substring(0, firstDash);
  String rollno = rawData.substring(firstDash + 1, secondDash);
  String dept = rawData.substring(secondDash + 1);

  Serial.println("Name: " + name);
  Serial.println("Roll: " + rollno);
  Serial.println("Dept: " + dept);

  // ================= BUZZER =================
  digitalWrite(BUZZER, HIGH);
  delay(200);
  digitalWrite(BUZZER, LOW);

  // ================= SEND TO SHEET =================
  if (WiFi.status() == WL_CONNECTED) {

    WiFiClientSecure client;
    client.setInsecure();

    String url = sheet_url +
                 "?name=" + name +
                 "&rollno=" + rollno +
                 "&dept=" + dept;

    Serial.println("URL:");
    Serial.println(url);

    HTTPClient https;

    if (https.begin(client, url)) {

      int httpCode = https.GET();

      if (httpCode > 0) {
        Serial.println("Data sent successfully");
      } else {
        Serial.println("HTTP Error");
      }

      https.end();
    }
  }

  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();

  delay(1500);
}

// ================= READ FUNCTION =================
void ReadDataFromBlock(int blockNum, byte readBlockData[]) {

  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  status = mfrc522.PCD_Authenticate(
    MFRC522::PICC_CMD_MF_AUTH_KEY_A,
    blockNum,
    &key,
    &(mfrc522.uid)
  );

  if (status != MFRC522::STATUS_OK) {
    Serial.println("Auth failed");
    return;
  }

  status = mfrc522.MIFARE_Read(blockNum, readBlockData, &bufferLen);

  if (status != MFRC522::STATUS_OK) {
    Serial.println("Read failed");
    return;
  }
}
