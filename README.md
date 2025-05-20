# Soil-monitoring-for-improved-crop-yield

Objective:  
To monitor soil conditions in real-time by measuring soil moisture and temperature to help farmers optimize irrigation and improve crop yield.

Components Used:  
Arduino Uno microcontroller board
Soil Moisture Sensor to measure the moisture level in soil
Temperature Sensor (LM35) to measure soil temperature
16x2 LCD Display with I2C Module to display sensor readings
Power Supply (5V from Arduino)

HOW IT WORKS:  
Sensors collect data:
The soil moisture sensor measures the water content in the soil.
The temperature sensor measures the soil temperature.

Arduino reads sensor values:
Analog values from the sensors are read through Arduino analog pins.

Data Display:
The current temperature and moisture levels are shown on the LCD screen.
The readings are also sent to the Serial Monitor for debugging or further processing.

Decision Making:
Based on sensor data, farmers can decide when to water crops, optimizing water usage.
Further expansion can automate irrigation using relays and water pumps.

