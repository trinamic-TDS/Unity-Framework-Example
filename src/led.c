#include "gpio.h"
#include "led.h"

#define LED_PIN 13

void led_on(void) {
    gpio_set_high(LED_PIN);
}

void led_off(void) {
    gpio_set_low(LED_PIN);
}
