# Adaptive Smart Street Light System 🚦💡

An edge-computing IoT prototype designed to significantly reduce urban energy consumption. This system autonomously manages street light brightness based on real-time environmental lighting and vehicular traffic, processing all logic locally on the microcontroller. 

## 🌟 Features
* **Day/Night Automation:** Uses a Photoresistor (LDR) to keep lights completely offline during daytime hours.
* **Energy-Saving Standby:** Automatically dims lights to a 15% power state at night when roads are empty, saving up to 85% energy.
* **Dynamic Traffic Tracking:** Utilizes motion sensors to instantly ramp specific street lights to 100% brightness only when a vehicle passes through that immediate zone.
* **Edge Processing:** Zero-latency hardware-level decision making without relying on cloud connectivity.

## 🛠️ Hardware Components
* 1x Arduino Uno R3
* 1x Photoresistor (LDR)
* 2x PIR Motion Sensors (Simulating vehicle detection zones)
* 2x White LEDs
* 1x 10kΩ Resistor (For LDR Voltage Divider)
* 2x 220Ω Resistors (For LEDs)
* Breadboard & Jumper Wires

## ⚙️ Circuit Wiring Reference
* **LDR:** Connected to Analog Pin `A0` (with 10kΩ pull-down resistor).
* **Zone 1 Sensor (PIR):** Connected to Digital Pin `2`.
* **Zone 2 Sensor (PIR):** Connected to Digital Pin `3`.
* **Street Light 1 (LED):** Connected to PWM Pin `5` (via 220Ω resistor).
* **Street Light 2 (LED):** Connected to PWM Pin `6` (via 220Ω resistor).

## 🚀 Installation & Setup
1. Clone this repository to your local machine:
   ```bash
   git clone [https://github.com/MohdAnas-1436/Adaptive-Smart-Street-Light]
