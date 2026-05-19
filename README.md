# Sign Language Gesture Glove (MPU6050 + ESP32)

A simple embedded system that uses an MPU6050 motion sensor on a glove to detect basic hand gestures and translate them into text commands (e.g., "Hello", "Yes", "No", "Help", "Stop"). This project is a starting point for sign‑language‑to‑text translation using an IMU instead of flex sensors.

> This project is ideal for learning:
> - ESP32 programming
> - MPU6050 IMU integration
> - Serial communication and gesture detection

## 📦 Hardware

- ESP32 (or Arduino) board  
- MPU6050 6‑axis accelerometer + gyroscope  
- LED (optional, for visual feedback)  
- Jumper wires and breadboard  
- (Optional) Glove to mount MPU6050 on the back of the hand  

MPU6050 wiring (ESP32 example):
- SDA  → GPIO 21  
- SCL  → GPIO 22  
- VCC  → 3.3V  
- GND  → GND  

LED (optional):
- LED anode → GPIO 2  
- LED cathode → GND (via resistor)

## ⚙️ How it works

- The MPU6050 continuously reads acceleration and gyroscope values.  
- The sketch classifies hand orientation based on simple thresholds (no ML yet).  
- When a matching gesture is detected, it prints the corresponding word to the Serial Monitor and blinks the LED once.  
- Each gesture is only printed once per state change (debounced by `lastState`).

## 📝 Gesture mapping (example)

| Condition                    | Output   |
|-----------------------------|----------|
| `ax > 10000`                | "Hello"  |
| `ax < -10000`               | "Yes"    |
| `ay > 10000`                | "No"     |
| `ay < -10000`               | "Help"   |
| `abs(gx) > 15000`           | "Stop"   |

> These thresholds are tuned for demo‑style values. You should adjust them according to real sensor readings from your MPU6050.

## 🚀 How to use

1. Install the required libraries:
   - `Wire.h` (built‑in)
   - `MPU6050.h` (e.g., from Jeff Rowberg’s `I2Cdevlib` or a compatible library)

2. Open `glove.ino` (or the main sketch) in Arduino IDE or PlatformIO.

3. Configure:
   - MPU6050 pins (`Wire.begin(SDA, SCL)`)  
   - `ledPin` (if using an LED)

4. Upload the code to your ESP32/Arduino.

5. Open the Serial Monitor at **115200 baud**.

6. Move the glove to trigger different gestures and see the output.

## 📈 Future improvements

- Add flex sensors to capture finger shapes (combine with MPU6050 for richer gestures).  
- Implement a simple state machine or gesture‑timing logic.  
- Use a small ML model (e.g., TensorFlow Lite for Microcontrollers) for multiclass gesture recognition.  
- Add Bluetooth or Wi‑Fi to send recognized signs to a phone or web app.

## 📚 References

- MPU6050 Arduino library: https://github.com/jrowberg/i2cdevlib  
- MPU6050 datasheet and basic wiring guides. [web:1][web:3]