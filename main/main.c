#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <dht.h>

#define SENSOR_TYPE DHT_TYPE_DHT11
#define DHT_GPIO GPIO_NUM_23

void dht_test(void *pvParameters)
{
    float temperature, humidity;

    while (1) {
        if (dht_read_float_data(SENSOR_TYPE, DHT_GPIO, &humidity, &temperature) == ESP_OK) {
            printf("Humidity: %.1f%%, Temperature: %.1f°C\n", humidity, temperature);
        } else {
            printf("Failed to read data from sensor\n");
        }
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}


void app_main(void)
{
    xTaskCreate(dht_test, "dht_test", configMINIMAL_STACK_SIZE * 3, NULL, 5, NULL);
}
