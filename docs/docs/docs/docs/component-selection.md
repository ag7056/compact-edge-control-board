# Component Selection

## Input Connector
A barrel jack or terminal block was selected to support a simple 12V DC input. This choice supports ease of prototyping and bench testing.

## Buck Regulator for 5V Rail
A switching regulator was selected for the 12V to 5V conversion stage to improve efficiency and reduce thermal losses compared with a linear regulator.

Selection criteria:
- efficiency
- availability
- package suitability
- support components and design simplicity

## 3.3V Regulator
A low-dropout regulator was used to derive 3.3V from the 5V rail for logic and sensor devices.

Selection criteria:
- low noise
- low dropout
- thermal suitability
- stable output for digital logic

## Microcontroller
A compact microcontroller with UART, GPIO, PWM, and I2C support was selected to manage temperature monitoring and fan control.

Selection criteria:
- peripheral support
- documentation quality
- ease of firmware development
- package practicality for assembly

## Temperature Sensor
An I2C digital temperature sensor was selected to enable straightforward board monitoring with minimal routing complexity.

## Fan Header
A 4-pin fan header was chosen to support PWM fan control and future compatibility with standard cooling components.

## LEDs
Discrete LEDs were included for:
- power good indication
- system heartbeat
- fault indication

## Passive Components
Standard resistor and capacitor values were selected to simplify sourcing and assembly while supporting regulator stability and signal integrity.
