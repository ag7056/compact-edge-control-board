# Firmware Behavior

## Startup
On startup, the microcontroller initializes GPIO, UART, I2C, and PWM peripherals. A short LED sequence indicates firmware startup.

## Normal Operation
The board periodically reads the onboard temperature sensor and maps temperature ranges to fan duty cycle levels.

## Thermal Response Example
- below 30C: fan off or minimum duty cycle
- 30C to 40C: low speed
- 40C to 50C: medium speed
- above 50C: high speed

## Fault Conditions
If sensor communication fails, the fault LED is asserted and a UART message is transmitted.

## Debug Output
UART output reports:
- current temperature
- fan duty cycle
- system state
- sensor communication status
