# Smart Attendance System Using RFID

Final semester project for **Programming Fundamentals (Spring 2026)**, FAST NUCES Karachi.

A portable, cloud-connected attendance terminal built on the **ESP8266 NodeMCU** and **MFRC522** RFID reader. Each student card is pre-encoded with `Name-RollNumber-Department`. On every tap, the device reads block 2 of the card, beeps a buzzer, and pushes the data over Wi-Fi to a **Google Apps Script** web app, which appends a timestamped row to a Google Sheet.

---

## Features

- Contactless RFID scanning (MIFARE Classic 1K)
- Live cloud logging to Google Sheets via HTTPS
- Audible buzzer feedback on each successful scan
- Portable — runs on a single 18650 lithium-ion cell
- ~1 second end-to-end latency per scan

## Hardware

| Component | Pin (NodeMCU) |
|---|---|
| MFRC522 SDA/SS | D4 |
| MFRC522 SCK | D5 |
| MFRC522 MOSI | D7 |
| MFRC522 MISO | D6 |
| MFRC522 RST | D3 |
| MFRC522 VCC / GND | 3V3 / GND |
| Buzzer (+) | D0 |
| 18650 (+ / −) | VIN / GND |

## Software

- Arduino IDE 2.x with ESP8266 board package
- Board: **NodeMCU 1.0 (ESP-12E Module)**
- Libraries: `SPI`, `MFRC522`, `ESP8266WiFi`, `ESP8266HTTPClient`, `WiFiClientSecure`
- Backend: Google Apps Script web app bound to a Google Sheet

## Setup

1. Wire the components as shown in the table above.
2. Open the firmware in Arduino IDE and update `ssid`, `password`, and `sheet_url`.
3. Deploy the Google Apps Script as a web app (access: *Anyone with link*).
4. Pre-write each card's block 2 with `Name-RollNumber-Department` using the encoder sketch.
5. Flash the main firmware to the NodeMCU and power on.

## Team

| Name | Roll No. | Role |
|---|---|---|
| Muhammad Hassan | 25K-6529 | Lead Programmer |
| Muhammad Zubair | 25K-6516 | Hardware & Wiring |
| Laksh Amar | 25K-6504 | Documentation & Testing |

---

*FAST NUCES Karachi · Programming Fundamentals · Spring 2026*
