#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

/* ----------- DHT SETTINGS ----------- */
#define DHTPIN A2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

/* ----------- LCD SETTINGS ----------- */
LiquidCrystal_I2C lcd(0x27, 16, 2); // Try 0x3F if needed

void setup() {
  Wire.begin();
  lcd.begin(16, 2);
  lcd.backlight();
  dht.begin();

  lcd.setCursor(0, 0);
  lcd.print("DHT11 SENSOR");
  lcd.setCursor(0, 1);
  lcd.print("Starting...");
  delay(2000);
  lcd.clear();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");
    lcd.setCursor(0, 1);
    lcd.print("Check Wiring");
    delay(2000);
    return;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Hum : ");
  lcd.print(h);
  lcd.print(" %");

  delay(2000);
}
