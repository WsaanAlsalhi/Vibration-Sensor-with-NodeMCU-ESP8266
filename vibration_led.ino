// Vibration Sensor with LED using NodeMCU ESP8266
// Sensor connected to D2, LED connected to D5

int sensorPin = D2;   // Digital output from vibration sensor
int ledPin = D5;      // External LED connected with 220Ω resistor

void setup() {
  pinMode(sensorPin, INPUT);   // Set sensor pin as input
  pinMode(ledPin, OUTPUT);     // Set LED pin as output
}

void loop() {
  int state = digitalRead(sensorPin);  // Read sensor state
  if (state == HIGH) {
    digitalWrite(ledPin, HIGH);   // Turn LED ON if vibration detected
  } else {
    digitalWrite(ledPin, LOW);    // Turn LED OFF if no vibration
  }
}
