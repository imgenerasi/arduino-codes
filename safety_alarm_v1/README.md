# Ultrasonic Distance Alert System

This Arduino project detects nearby objects using an ultrasonic sensor and provides an audible and visual alert when the object is within 10 cm.

## Features
- **Ultrasonic distance measurement** using HC-SR04 (or compatible) sensor.
- **Audible alert**: Buzzer plays a rising and falling frequency sweep when an object is detected.
- **Visual alert**: Red LED toggles on and off in sync with the buzzer sound.
- Adjustable detection gap and tone sweep parameters.

## How It Works
1. The ultrasonic sensor measures the distance to the nearest object.
2. If the distance is **less than 10 cm**:
   - The buzzer plays a "rise-fall" tone pattern multiple times.
   - The red LED flashes with each tone cycle.
3. After the alert cycle, the system pauses for a defined gap before repeating measurements.

## Pin Connections
| Component       | Arduino Pin |
|-----------------|-------------|
| Buzzer          | 9           |
| Red LED         | 13          |
| Green LED*      | 12          |
| Ultrasonic TRIG | 11          |
| Ultrasonic ECHO | 10          |
| Button*         | 8           |

\*Note: Green LED and button are defined but not used in the current code.

## Configuration
- **`gap`** (milliseconds) – Delay after an alert sequence (default: `1000` ms).
- **`risefall()`** function parameters control the tone sweep speed and frequency range.

## Requirements
- Arduino Uno or compatible board
- HC-SR04 ultrasonic sensor (or equivalent)
- Passive buzzer
- LEDs and resistors
- Jumper wires and breadboard

## Usage
1. Connect components according to the **Pin Connections** table.
2. Upload the sketch to your Arduino board.
3. Place an object within 10 cm of the sensor to trigger the alert.

## License
This project is released under the MIT License.
