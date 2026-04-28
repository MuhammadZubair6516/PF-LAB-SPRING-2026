#include <SPI.h>
#include <MFRC522.h>

constexpr uint8_t RST_PIN = D3;
constexpr uint8_t SS_PIN  = D4;

MFRC522 mfrc522(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;

int blockNum = 2;

// FIXED: proper 16-byte buffer (RFID block size = 16 bytes)
byte blockData[16] = { 'Z','u','b','a','i','r','-','1','6','-','B','C','E',' ',' ',' ' };

byte bufferLen = 18;
byte readBlockData[18];
MFRC522::StatusCode status;

// Function declarations
void WriteDataToBlock(int blockNum, byte blockData[]);
void ReadDataFromBlock(int blockNum, byte readBlockData[]);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();

  Serial.println("Scan a MIFARE 1K Tag...");
}

void loop() {

  // Set default key each loop
  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  // Wait until card is present (clean logic, no spam)
  if (!mfrc522.PICC_IsNewCardPresent()) {
    delay(50);
    return;
  }

  // Read card
  if (!mfrc522.PICC_ReadCardSerial()) {
    delay(50);
    return;
  }

  // -------- CARD DETECTED --------
  Serial.println("\n**Card Detected**");
  Serial.print("Card UID:");

  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(" ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  }

  Serial.println();

  Serial.println("Writing to Data Block...");
  WriteDataToBlock(blockNum, blockData);

  Serial.println("Reading from Data Block...");
  ReadDataFromBlock(blockNum, readBlockData);

  Serial.print("Data in Block: ");
  for (int j = 0; j < 16; j++) {
    Serial.write(readBlockData[j]);
  }

  Serial.println();

  // IMPORTANT: stop RFID session properly
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();

  delay(1000); // prevent double scan
}

// ================= WRITE =================
void WriteDataToBlock(int blockNum, byte blockData[]) {

  status = mfrc522.PCD_Authenticate(
    MFRC522::PICC_CMD_MF_AUTH_KEY_A,
    blockNum,
    &key,
    &(mfrc522.uid)
  );

  if (status != MFRC522::STATUS_OK) {
    Serial.print("Auth failed (Write): ");
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  status = mfrc522.MIFARE_Write(blockNum, blockData, 16);

  if (status != MFRC522::STATUS_OK) {
    Serial.print("Write failed: ");
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  Serial.println("Write successful");
}

// ================= READ =================
void ReadDataFromBlock(int blockNum, byte readBlockData[]) {

  status = mfrc522.PCD_Authenticate(
    MFRC522::PICC_CMD_MF_AUTH_KEY_A,
    blockNum,
    &key,
    &(mfrc522.uid)
  );

  if (status != MFRC522::STATUS_OK) {
    Serial.print("Auth failed (Read): ");
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  status = mfrc522.MIFARE_Read(blockNum, readBlockData, &bufferLen);

  if (status != MFRC522::STATUS_OK) {
    Serial.print("Read failed: ");
    Serial.println(mfrc522.GetStatusCodeName(status));
    return;
  }

  Serial.println("Read successful");
}
