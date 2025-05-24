
#include <FreeRTOS.h>
#include <task.h>

#include "pico/stdlib.h"
#include <stdio.h>


struct led_task_arg {
    int gpio;
void led_task(void *p) {
    }
}



int main() {
    stdio_init_all();
    printf("Start LED blink\n");


    struct led_task_arg arg1 = {20, 100};
    xTaskCreate(led_task, "LED_Task 1", 256, &arg1, 1, NULL);

int main() {
    struct led_task_arg arg3 = {22, 300};
    xTaskCreate(led_task, "LED_Task 3", 256, &arg3, 1, NULL);




    vTaskStartScheduler();

    while (true)
        ;
}