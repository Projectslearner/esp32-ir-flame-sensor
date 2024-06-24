# ESP32 IR Flame Sensor Project

## Project Overview
This project demonstrates how to use an IR flame sensor with an ESP32 microcontroller to detect the presence of flames. IR flame sensors are commonly used in fire detection systems where early detection of flames is crucial for safety.

## Components Needed
- ESP32 Microcontroller
- IR Flame Sensor Module
- LED (optional for visual indication)
- Jumper Wires
- Breadboard

## Block diagram


## Circuit Setup
1. **Connecting the IR Flame Sensor to ESP32:**
   - Connect the digital output pin of the IR flame sensor module to GPIO pin 15 on the ESP32.
   - Optionally, connect an LED to GPIO pin 2 on the ESP32 for visual indication of flame detection.
   - Ensure the power and ground connections of the IR flame sensor module are properly connected to the ESP32.

## Instructions
1. **Setup:**
   - Initialize GPIO pins for the flame sensor and LED (if used) using `pinMode()` in the `setup()` function.
   - Start serial communication at a baud rate of 115200 for debugging.

2. **Operation:**
   - In the `loop()` function:
     - Read the digital state of the IR flame sensor using `digitalRead(flameSensorPin)`.
     - If a flame is detected (LOW state), print "Flame detected!" to the Serial Monitor and turn on the LED (if connected).
     - If no flame is detected (HIGH state), print "No flame detected." to the Serial Monitor and turn off the LED (if connected).

3. **Considerations:**
   - **Sensor Sensitivity:** Adjust the placement and sensitivity of the IR flame sensor to ensure reliable detection of flames.
   - **LED Feedback:** Use an LED for visual feedback to indicate when a flame is detected.
   - **Safety:** Test the sensor in a controlled environment to ensure proper functionality in detecting flames.

## Applications
- **Fire Detection Systems:** Integrate into fire alarm systems for early detection of flames.
- **Safety and Security:** Use in home automation for fire prevention and safety.
- **Industrial Applications:** Monitor machinery and equipment for fire hazards.

## Notes
- **Sensor Calibration:** Calibrate the sensor based on the environment and expected flame characteristics.
- **LED Indicator:** Provides visual feedback for immediate status indication.
- **Serial Output:** Use the Serial Monitor to monitor sensor readings and debug the system.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 IR Flame Sensor](https://projectslearner.com/learn/esp32-ir-flame-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner