# Auto Bin Project

The Auto Bin Project is an Arduino-based system designed to automate the opening of a dust bin's door using an ultrasonic sensor and a servo motor. When dust particles or other objects come close to the sensor, the system automatically opens the dust bin's door.

## Features

- **Ultrasonic Sensor**: Detects the presence of dust or objects near the bin.
- **Servo Motor**: Controls the opening and closing of the dust bin's door.
- **Automatic Operation**: Opens the bin door when objects are detected by the sensor.
- **Arduino Integration**: Uses Arduino to manage sensor input and motor control.

## Components Used

- **Arduino Board**: Microcontroller for managing sensor data and controlling the servo motor.
- **Ultrasonic Sensor**: Measures distance to detect objects or dust particles.
- **Servo Motor**: Opens and closes the dust bin's door based on sensor input.
- **Dust Bin**: The container where the automated door mechanism is installed.

## How It Works

1. **Sensor Detection**: The ultrasonic sensor continuously measures the distance to nearby objects.
2. **Object Detection**: When the sensor detects an object or dust particles within a predefined range, it triggers the servo motor.
3. **Door Operation**: The servo motor opens the dust bin's door to allow objects to be disposed of.
4. **Automatic Reset**: The door closes automatically after a set period or when no objects are detected.
