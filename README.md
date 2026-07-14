# Parking-Assistant-v1.0
A simple Arduino Smart Parking Assistant using an ultrasonic sensor, RGB LED, and passive buzzer to provide real-time distance monitoring with visual and audio alerts.


# Smart Parking Assistant using Arduino

## Overview
The **Smart Parking Assistant** is an Arduino-based embedded systems project designed to assist in parking by continuously monitoring the distance to nearby obstacles. Using an **HC-SR04 Ultrasonic Sensor**, the system calculates the distance in real time and provides intuitive visual and audio feedback to help the user judge proximity.

As an obstacle gets closer, the **RGB LED** transitions through **Safe (Green)**, **Caution (Yellow)**, and **Stop (Red)** zones, while a **passive buzzer** increases its beep frequency to simulate the behaviour of commercial vehicle parking sensors.

---

## Features

-  Real-time distance measurement using the HC-SR04 Ultrasonic Sensor
-  Three-stage visual indication using an RGB LED
-  Progressive audio alerts using a passive buzzer
-  Instant decision-making based on distance thresholds

---

## Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Common Anode RGB LED
- Passive Buzzer
- 220Ω Resistors
- Breadboard
- Jumper Wires

---

## Working Principle

The ultrasonic sensor continuously measures the distance to an obstacle placed in front of it. Based on predefined distance ranges, the Arduino classifies the situation into three warning zones.

| Distance | LED | Buzzer |
|----------|-----|--------|
| > 30 cm | 🟢 Green | Off |
| 15–30 cm | 🟡 Yellow | Slow Beep |
| < 15 cm | 🔴 Red | Fast Beep |
| < 5 cm | 🔴 Red | Continuous Beep |

This combination of visual and audio feedback provides an intuitive parking assistance system similar to those found in modern vehicles.

---

## Future Improvements

-  Smoother RGB colour transitions
-  Distance averaging to reduce sensor fluctuations
-  Compact enclosure for real-world deployment

---

## Project Status

 **Version 1.0 Completed**
