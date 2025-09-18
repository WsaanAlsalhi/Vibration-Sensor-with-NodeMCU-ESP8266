# Vibration Sensor with NodeMCU ESP8266

This project demonstrates how to use a **vibration sensor module (LM393-based)** with the **NodeMCU ESP8266** to control an external LED.  
Whenever the sensor detects vibration, the LED will turn **ON**, otherwise it stays **OFF**.

## Components Used
- NodeMCU ESP8266 board
- Vibration Sensor Module (LM393 comparator)
- LED (any color)
- 220Ω resistor
- Breadboard + jumper wires

## Circuit Connections
- Sensor VCC → NodeMCU 3V  
- Sensor GND → NodeMCU G  
- Sensor D0 → NodeMCU D2  
- LED (+) → Resistor 220Ω → NodeMCU D5  
- LED (–) → NodeMCU G  

## Arduino Code
See the file [`vibration_led.ino`](vibration_led.ino) in this repository.

## How it Works
1. The LM393 comparator on the sensor module outputs **HIGH** when vibration is detected.  
2. NodeMCU reads this signal from pin **D2**.  
3. If HIGH → LED turns ON (pin D5 = HIGH).  
4. If LOW → LED turns OFF (pin D5 = LOW).  

## Demo
Shake or tap the sensor → the LED will light up.
