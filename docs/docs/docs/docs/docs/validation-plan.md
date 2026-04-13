# Validation Plan

## Purpose
This validation plan defines the initial electrical checks and system-level tests required during prototype bring-up.

## Bring-Up Sequence
1. Visually inspect the assembled board
2. Check for shorts between power and ground
3. Apply current-limited input power
4. Measure 5V output rail
5. Measure 3.3V output rail
6. Verify microcontroller power and reset behavior
7. Confirm UART communication
8. Confirm I2C sensor response
9. Verify PWM fan control
10. Confirm LED behavior

## Electrical Validation
- input current under idle conditions
- 5V rail tolerance
- 3.3V rail tolerance
- regulator ripple checks
- continuity checks for key nets

## Functional Validation
- temperature sensor readout
- fan turn-on threshold
- fan PWM response
- UART debug output
- LED state transitions

## Environmental and Thermal Validation
- observe regulator temperatures under nominal load
- observe fan response to increasing thermal conditions
- record any hotspots near power devices

## Documentation
All anomalies should be logged in the issue tracker under `test-results/issue-log.md`.
