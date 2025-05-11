# 🌡️ Temp and Humid Sensor Using ESP32

This project is a simple demonstration of how to acquire temperature and humidity sensor readings using the ESP-IDF framework and display the data through serial logs.

---

## 📦 Requirements

- ESP32 Development Board  
- DHT11 or DHT22 Temperature & Humidity Sensor  
- Jumper wires  
- ESP-IDF installed and configured  
- USB cable for flashing  
- Serial terminal (e.g., `idf.py monitor`, PuTTY, or minicom)  

---

## 🔌 Circuit Connection

| Sensor Pin | ESP32 Pin |
|------------|-----------|
| VCC        | 3.3V      |
| GND        | GND       |
| DATA       | GPIO23     |

> 💡 *Note: Use a 10kΩ pull-up resistor between DATA and VCC if your sensor requires it.*

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone <your-repo-url>
cd temp-humid-sensor
```

### 2. Set the Target to ESP32

```bash
idf.py set-target esp32
```

### 3. Build the Project

```bash
idf.py build
```

### 4. Flash to Device

```bash
idf.py -p /dev/ttyUSB0 flash
```

*(Replace `/dev/ttyUSB0` with your actual serial port.)*

### 5. Monitor Output

```bash
idf.py -p /dev/ttyUSB0 monitor
```

---

## 📈 Sample Output

Once running, the ESP32 will read from the sensor every few seconds and output logs similar to:

```
[DHT] Temperature: 26.4 °C
[DHT] Humidity: 55.2 %

---

## 🧪 Notes

- DHT11 is slower and less accurate compared to DHT22.
- Ensure your sensor has proper power (3.3V or 5V as per spec).
- If you get checksum or timeout errors, double-check wiring and delays.

---

## 📌 Future Improvements

- Add MQTT or HTTP integration to push data to the cloud   
- Add a web server interface for live monitoring
- Broadcast data via BLE (e.g. beacon, connectable)

---

## 🛠️ Troubleshooting

- **No output in monitor?** Make sure the right COM port is selected and the board is powered.
- **Sensor errors or NaN readings?** Check wiring, sensor voltage, and whether a pull-up resistor is needed.
- **Build errors?** Ensure ESP-IDF is properly installed and `IDF_PATH` is set.
