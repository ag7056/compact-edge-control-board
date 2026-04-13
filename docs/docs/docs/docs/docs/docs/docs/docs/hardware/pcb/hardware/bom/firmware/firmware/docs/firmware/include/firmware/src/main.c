#include <stdio.h>
#include "config.h"

/*
 * Example firmware logic for the Compact Edge Control Board.
 * This is simplified portfolio code intended to demonstrate
 * temperature-based fan control and debug output structure.
 */

int read_temperature_sensor(void) {
    /* Placeholder for I2C temperature sensor read */
    return 42;
}

void set_fan_pwm(int duty_cycle) {
    /* Placeholder for PWM output configuration */
    printf("Fan duty cycle set to %d%%\n", duty_cycle);
}

void set_status_leds(int temp_c) {
    /* Placeholder for LED logic */
    if (temp_c > TEMP_HIGH_THRESHOLD_C) {
        printf("FAULT LED ON\n");
    } else {
        printf("NORMAL STATUS LED ACTIVE\n");
    }
}

int determine_fan_duty_cycle(int temp_c) {
    if (temp_c < TEMP_LOW_THRESHOLD_C) {
        return FAN_PWM_MIN;
    } else if (temp_c < TEMP_MID_THRESHOLD_C) {
        return FAN_PWM_MED;
    } else {
        return FAN_PWM_HIGH;
    }
}

int main(void) {
    printf("Compact Edge Control Board Firmware Start\n");

    while (1) {
        int temp_c = read_temperature_sensor();
        int duty_cycle = determine_fan_duty_cycle(temp_c);

        set_fan_pwm(duty_cycle);
        set_status_leds(temp_c);

        printf("Temperature: %d C | Fan Duty: %d%%\n", temp_c, duty_cycle);

        break; /* Simplified for demonstration */
    }

    return 0;
}
