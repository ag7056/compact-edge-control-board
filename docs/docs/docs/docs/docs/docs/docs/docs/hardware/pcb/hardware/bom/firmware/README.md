# Firmware Overview

This firmware supports board monitoring and fan control for the Compact Edge Control Board.

## Functional Behavior
- initialize board peripherals
- read digital temperature sensor over I2C
- evaluate temperature thresholds
- set fan PWM duty cycle
- output diagnostic information over UART
- update status LEDs

## Future Additions
- fault reporting
- rail monitoring
- external host communication
- persistent event logging
