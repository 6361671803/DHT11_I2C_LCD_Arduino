# DHT11_I2C_LCD_Arduino
Arduino project to display temperature and humidity using DHT11 and I2C LCD
# DHT11 Temperature & Humidity Display using Arduino UNO and I2C LCD

## 📌 Project Description
This project displays **temperature and humidity** using a **DHT11 sensor** on a **16x2 I2C LCD** with **Arduino UNO**.

---

## 🧰 Components Required
- Arduino UNO
- DHT11 Temperature & Humidity Sensor
- 16x2 LCD with I2C Module
- Jumper Wires
- 10kΩ Resistor (only if using bare DHT11)

---

## 🔌 Connections

### DHT11 → Arduino UNO
| DHT11 | Arduino |
|------|---------|
| VCC  | 5V |
| DATA | A2 |
| GND  | GND |

### I2C LCD → Arduino UNO
| LCD | Arduino |
|-----|--------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

## 📚 Libraries Used
- DHT Sensor Library (Adafruit)
- Adafruit Unified Sensor
- LiquidCrystal I2C

Install from **Arduino Library Manager**.

---

## ▶️ Output
- Displays Temperature in °C
- Displays Humidity in %

---

## 🧠 Notes
- If LCD shows garbage, adjust contrast potentiometer
- If LCD not working, try I2C address `0x3F`

---

## 👨‍💻 Author
mohammed fahad

Happy Coding 🚀

