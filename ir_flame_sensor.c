/*
    Project name : ESP32 IR Flame Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-ir-flame-sensor
*/

const int flameSensorPin = 15; // Pin connected to the digital output of the flame sensor
const int ledPin = 2; // On-board LED pin

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(flameSensorPin, INPUT); // Set flame sensor pin as INPUT
  pinMode(ledPin, OUTPUT); // Set LED pin as OUTPUT
}

void loop() {
  int flameState = digitalRead(flameSensorPin); // Read the state of the flame sensor

  if (flameState == LOW) { // If flame is detected (LOW state)
    Serial.println("Flame detected!");
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    Serial.println("No flame detected.");
    digitalWrite(ledPin, LOW); // Turn off the LED
  }

  delay(500); // Add a small delay before the next reading
}
