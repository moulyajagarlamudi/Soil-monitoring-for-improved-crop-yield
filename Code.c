#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define LCD I2C address and dimensions
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define TEMP_SENSOR_PIN A0       // Temperature sensor (LM35) connected to analog pin A0
#define MOISTURE_SENSOR_PIN A1   // Soil moisture sensor connected to analog pin A1

void setup() {
  lcd.begin();            // Initialize LCD
  lcd.backlight();        // Turn on LCD backlight
  Serial.begin(9600);     // Start serial communication for debugging
}

void loop() {
  int tempReading = analogRead(TEMP_SENSOR_PIN);
  int moistureReading = analogRead(MOISTURE_SENSOR_PIN);

  // Convert temperature reading to Celsius
  float temperature = (tempReading * 5.0 * 100.0) / 1024.0;

  // Print values on Serial Monitor
  Serial.print("Temperature (C): ");
  Serial.print(temperature);
  Serial.print(" | Soil Moisture: ");
  Serial.println(moistureReading);

  // Display values on LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C  ");

  lcd.setCursor(0, 1);
  lcd.print("Moisture: ");
  lcd.print(moistureReading);
  lcd.print("   ");

  delay(1000);  // Wait for 1 second before next reading
}
