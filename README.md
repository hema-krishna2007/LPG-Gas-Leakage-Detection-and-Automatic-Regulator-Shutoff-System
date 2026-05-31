# 🔥 LPG Gas Leakage Detection and Automatic Regulator Shutoff SystThe system continuously monitors LPG gas leakage using an **MQ-5 LPG Gas Sensor**.

When gas leakage is detected, the system activates an audible buzzer alarm, displays warning messages on a 16x2 I2C LCD display, and automatically rotates an SG90 servo motor to shut off the gas regulator.

The complete system is powered using a lithium-ion battery and DC-DC boost converter, making it suitable for standalone operation.

The objective of this project is to improve domestic LPG safety by combining gas detection, visual alerts, audible alarms, and automatic regulator control in a single embedded system.

---

## 🔹 Project Overview

LPG leakage is one of the major causes of household and industrial accidents. Traditional gas leak alarms only provide warnings after detecting leakage.

This project enhances safety by automatically closing the LPG regulator when gas leakage is detected. The system continuously monitors gas concentration using an MQ-5 gas sensor and performs immediate preventive action through a servo motor mechanism.

The project demonstrates the practical implementation of embedded systems, sensor interfacing, safety automation, and actuator control.

---

## 🔁 System Architecture Flow

```text
MQ-5 LPG Gas Sensor
         │
         ▼
     Arduino Uno
         │
         ▼
 Gas Level Analysis
         │
         ▼
 ┌─────────────┬────────
 │             │             │
 ▼             ▼             ▼
Buzzer      LCD Display   Servo Motor
Alarm       Alert Status  Close Regulator
```

---

## 🔹 Hardware & Technologies Used

### Hardware Components

- Arduino Uno
- MQ-5 LPG Gas Sensor
- SG90 Servo Motor
- 16x2 I2C LCD Display
- Active Buzzer
- Lithium-Ion Battery Pack
- DC-DC Boost Converter Module
- SPST Power Switch
- LPG Gas Regulator Mechanism
- Connecting Wires

### Software & Technologies

- Arduino IDE
- Embedded C/C++
- Sensor Interfacing
- Servo Motor Control
- I2C Communication
- Embedded Systems Design

---

## ⭐ Key Features

- Real-time LPG gas leakage monitoring
- Automatic gas leakage detection
- Immediate audible buzzer alert
- LCD-based status indication
- Automatic LPG regulator shutoff
- Portable battery-powered operation
- Low-cost safety solution
- Standalone embedded system
- Easy hardware implementation

---

## 🔹 Why This Project Is Special

Unlike conventional gas leakage alarm systems that only provide notifications, this project performs an automatic safety action by physically shutting off the gas regulator using a servo motor.

This reduces the risk of gas-related accidents and demonstrates the integration of sensing, monitoring, display systems, and actuator-based control in a practical safety application.

### Safety Actions Performed

✔ Detects LPG gas leakage

✔ Activates buzzer alarm

✔ Displays warning messages on LCD

✔ Automatically closes the gas regulator

✔ Helps reduce fire and explosion risks

---

## 🔹 Most Useful In

- Residential Kitchens
- LPG Cylinder Storage Areas
- Restaurants
- Hotels
- Laboratories
- Small Industries
- Educational Demonstrations
- Safety Monitoring Applications

---

## 📁 Repository Structure

```text
LPG-Gas-Leakage-Detection-and-Automatic-Regulator-Shutoff-System
│
├── README.md
│
├── code
│   └── LPG_Gas_Detection_System.ino
│
└── images
    ├── hardware_setup.jpg
    └── circuit_diagram.png
```

---

## 📄 Source Code

### Arduino Program

```text
code/LPG_Gas_Detection_System.ino
```


---

## 📷 Project Images

### Complete Hardware Setup

![Hardware Setup](images/hardware_setup.jpg)


### Circuit Diagram

![Circuit Diagram](images/circuit_diagram.png)

---

## 🚀 Learning Outcomes

This project helped me gain practical knowledge in:

- Arduino Programming
- Embedded Systems Development
- MQ-5 Gas Sensor Interfacing
- Servo Motor Control
- I2C LCD Interfacing
- Analog Sensor Data Processing
- Hardware Design and Testing
- Safety Automation Systems
- Troubleshooting and Debugging
- Technical Documentation

---

## 🔧 Installation Instructions

### 1️⃣ Software Requirements

- Arduino IDE

Download:

https://www.arduino.cc/en/software

---

### 2️⃣ Required Libraries

Install the following libraries from:

**Sketch → Include Library → Manage Libraries**

#### Libraries Required

- LiquidCrystal_I2C
- Servo

---

### 3️⃣ Uploading the Code

#### Step 1

Connect Arduino Uno to the computer using a USB cable.

#### Step 2

Open Arduino IDE.

#### Step 3

Install the required libraries.

#### Step 4

Open:

```text
code/LPG_Gas_Detection_System.ino
```

#### Step 5

Select:

```text
Tools → Board → Arduino Uno
```

#### Step 6

Select the correct COM Port.

#### Step 7

Click Upload.

#### Step 8

After successful upload, power the complete hardware setup.

---

## 🔌 Complete Wiring Connections

### 📍 MQ-5 LPG Gas Sensor → Arduino Uno

| MQ-5 Pin | Arduino Uno Pin | Purpose |
|-----------|----------------|----------|
| VCC | 5V | Power Supply |
| GND | GND | Ground |
| AO | A0 | Analog Gas Reading |
| DO | Not Used | Optional Digital Output |

---

### 📍 SG90 Servo Motor → Arduino Uno

| Servo Pin | Arduino Uno Pin | Purpose |
|------------|----------------|----------|
| Brown (GND) | GND | Ground |
| Red (VCC) | 5V | Power Supply |
| Orange (Signal) | D9 | Servo Control Signal |

---

### 📍 Active Buzzer → Arduino Uno

| Buzzer Pin | Arduino Uno Pin | Purpose |
|------------|----------------|----------|
| Positive (+) | D8 | Alarm Output |
| Negative (-) | GND | Ground |

---

### 📍 I2C LCD Display (16x2) → Arduino Uno

| LCD Pin | Arduino Uno Pin | Purpose |
|----------|----------------|----------|
| VCC | 5V | Power Supply |
| GND | GND | Ground |
| SDA | A4 | I2C Data Line |
| SCL | A5 | I2C Clock Line |

---

### 📋 Complete Pin Mapping Summary

| Arduino Pin | Connected Device |
|-------------|------------------|
| A0 | MQ-5 Sensor Output |
| A4 | LCD SDA |
| A5 | LCD SCL |
| D8 | Active Buzzer |
| D9 | SG90 Servo Signal |
| 5V | MQ-5, LCD, Servo, Buzzer |
| GND | Common Ground |

---

## 🔋 Power Supply Connections

### Battery and Power Module

| Component | Connection |
|------------|------------|
| Lithium-Ion Battery Pack | DC-DC Boost Converter Input |
| SPST Switch | Between Battery and Boost Converter |
| Boost Converter Output (+) | Regulated 5V Supply |
| Boost Converter Output (-) | Arduino GND |

### Recommended Operating Voltage

| Device | Voltage |
|----------|----------|
| Arduino Uno | 5V |
| MQ-5 Sensor | 5V |
| I2C LCD Display | 5V |
| Active Buzzer | 5V |
| SG90 Servo Motor | 5V |

---

## ⚠️ Important Notes

### MQ-5 Gas Sensor

- Allow the sensor to warm up before testing.
- Sensor readings become more stable after proper warm-up.

### Servo Motor

- Servo motors may draw higher current during operation.
- Use a stable power source for reliable performance.

### LPG Testing

- Perform testing in a safe and well-ventilated environment.
- Never perform testing near open flames or ignition sources.

### Common Ground

- Ensure all modules share a common ground connection.

### Sensor Calibration

- Adjust threshold values according to environmental conditions and testing requirements.

---

## 🛠 Troubleshooting

### Sensor Not Detecting Gas

- Verify sensor power supply.
- Check analog output connection.
- Allow sufficient warm-up time.

### LCD Not Displaying

- Verify SDA and SCL wiring.
- Check I2C address configuration.
- Ensure proper power supply.

### Servo Not Rotating

- Verify D9 signal connection.
- Check servo power supply.
- Ensure mechanical movement is not blocked.

### Buzzer Not Working

- Verify buzzer polarity.
- Check D8 connection.
- Verify buzzer functionality.

### False Gas Detection

- Recalibrate sensor threshold.
- Avoid placing the sensor near smoke, chemicals, or strong vapors.

---

## 📈 Future Improvements

Possible future enhancements include:

- GSM-Based Emergency SMS Alerts
- Mobile Application Notifications
- Wi-Fi Connectivity
- Cloud-Based Monitoring Dashboard
- Real-Time Data Logging
- Battery Health Monitoring
- Multiple Gas Detection Sensors
- Smart Home Integration

---

## 🤝 Feedback

Suggestions, improvements, and discussions are always welcome.

If you find any issues or have ideas for enhancement, feel free to open an issue or submit a pull request.

---

## 👨‍💻 Author

**Hema Krishna**

Electronics & Communication Engineering (ECE)



GitHub:
https://github.com/hema-krishna2007

---

## 🔖 Tags

Arduino • MQ-5 • Embedded Systems • Gas Detection • LPG Safety • Servo Motor • I2C LCD • Automation • Electronics • ECE Project
