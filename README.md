# arduino-codes

This repository contains a collection of Arduino sketches for various electronics projects.  
Each project has its own folder with code, documentation, and any necessary resources.

## Projects

### 1\. Safety Alarm v1

**Folder:** `safety\_alarm\_v1`  
An ultrasonic distance-based alert system that uses a buzzer and LED to warn when an object is closer than a set threshold.  
Features:

* Ultrasonic distance measurement (HC-SR04 or similar)
* Rising-falling tone buzzer alert
* LED flashing indicator

[See project details](./safety_alarm_v1/README.md)

---

## Repository Structure

.
├── safety\_alarm\_v1/ # First project
│ ├── safety\_alarm\_v1.ino
│ └── README.md
└── README.md # This file

---

## Requirements

* Arduino IDE (or PlatformIO)
* Arduino Uno or compatible board
* Components as listed in each project's README
* USB cable for uploading code

---

## Adding New Projects

1. Create a new folder for your project inside the repository root.
2. Place your `.ino` file(s) and any supporting resources in that folder.
3. Add a `README.md` describing the project.
4. Update this root `README.md` to list your new project.

---

## License

All projects in this repository are released under the **MIT License**, unless otherwise noted in a specific project's folder.  
See [LICENSE](./LICENSE) for full details.

