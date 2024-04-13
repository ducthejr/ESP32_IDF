#include "driver/gpio.h"

void app_main() {
    esp_rom_gpio_pad_select_gpio(GPIO_NUM_2);
    ESP_ERROR_CHECK(gpio_set_direction(GPIO_NUM_2,GPIO_MODE_OUTPUT));
    ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_2,1));
    esp_rom_gpio_pad_select_gpio(GPIO_NUM_16);
    ESP_ERROR_CHECK(gpio_set_direction(GPIO_NUM_16,GPIO_MODE_OUTPUT));
    ESP_ERROR_CHECK(gpio_set_level(GPIO_NUM_16,1));

}