#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <driver/gpio.h>


#define PIN_LED 13

void app_main()

{

    gpio_reset_pin(PIN_LED);
    gpio_set_direction(PIN_LED, GPIO_MODE_DEF_OUTPUT);
    while(1)
    {

    gpio_set_level(PIN_LED,1);
    printf("Hello world!\n");
    vTaskDelay(50 / portTICK_PERIOD_MS);
    gpio_set_level(PIN_LED,0);    
    
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    

}