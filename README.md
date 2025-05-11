# 🌡️ Temp and Humid Sensor Using ESP32

This project is a simple demonstration of how to acquire temperature and humidity sensor readings using the ESP-IDF framework and display the data through serial logs. It's great for beginners learning embedded development with the ESP32 and environmental sensors.

---

## 📦 Requirements

- ESP32 Development Board  
- DHT11 or DHT22 Temperature & Humidity Sensor  
- Jumper wires  
- ESP-IDF (v4.x or later) installed and configured  
- USB cable for flashing  
- Serial terminal (e.g., `idf.py monitor`, PuTTY, or minicom)  

---

## 🔌 Circuit Connection

| Sensor Pin | ESP32 Pin |
|------------|-----------|
| VCC        | 3.3V      |
| GND        | GND       |
| DATA       | GPIO4     |

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
```

---

## ⚙️ Configuration

- Sensor GPIO pin can be configured in `main/dht_sensor.c` or via Kconfig if implemented.
- Measurement interval can also be modified in the code (typically via `vTaskDelay`).

---

## 🧪 Notes

- DHT11 is slower and less accurate compared to DHT22.
- Ensure your sensor has proper power (3.3V or 5V as per spec).
- If you get checksum or timeout errors, double-check wiring and delays.

---

## 📌 Future Improvements

- Add MQTT or HTTP integration to push data to the cloud  
- Display sensor readings on an OLED screen  
- Use NVS (non-volatile storage) to store historical data  
- Add a web server interface for live monitoring  

---

## 🛠️ Troubleshooting

- **No output in monitor?** Make sure the right COM port is selected and the board is powered.
- **Sensor errors or NaN readings?** Check wiring, sensor voltage, and whether a pull-up resistor is needed.
- **Build errors?** Ensure ESP-IDF is properly installed and `IDF_PATH` is set.

---

## 📜 License

This project is open-source and available under the MIT License.
