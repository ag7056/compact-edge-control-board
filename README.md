! compact-edge-control-board
A compact embedded control board designed for a self-hosted edge device, featuring regulated power delivery, sensor monitoring, PCB layout, test planning, thermal evaluation, and microcontroller firmware integration.
compact-edge-control-board/


! Compact Edge Control Board

!! Overview
This project documents the design, development, and validation planning for a compact embedded control board intended for a self-hosted edge device environment. The board was designed to support reliable power delivery, temperature monitoring, cooling control, debugging access, and hardware-software integration in a compact form factor.

The purpose of this project was to simulate a product-oriented electrical engineering workflow from requirements definition through schematic capture, PCB layout, validation planning, and manufacturing handoff documentation.

!! Project Goals
- Design a compact PCB for an embedded edge system
- Implement stable regulated power for logic and peripheral devices
- Support temperature monitoring and fan control
- Provide debug and communication interfaces
- Document component selection and design tradeoffs
- Create validation and bring-up procedures
- Prepare documentation that supports prototyping and transition toward manufacturing

!! Features
- 12V DC input
- 5V and 3.3V regulated rails
- Microcontroller-based monitoring and control
- I2C temperature sensor
- PWM fan header
- Status LEDs
- USB/UART debug interface
- GPIO expansion header
- Design documentation, test planning, and manufacturing notes

!! System Architecture
The board accepts a 12V input and generates regulated 5V and 3.3V rails for logic and peripheral support. A microcontroller reads temperature data from an I2C sensor and drives a PWM fan output based on thermal thresholds. Debug access is provided through UART, and board health is communicated through onboard LEDs.

!! Design Focus Areas
- Power integrity
- Thermal awareness
- Compact PCB layout
- Hardware-software integration
- Validation planning
- Manufacturability and documentation

!! Repository Structure
- `docs/` contains engineering documentation and design rationale
- `hardware/` contains schematic exports, layout files, BOM, and render images
- `firmware/` contains embedded firmware and firmware documentation
- `test-results/` contains bring-up and validation notes
- `manufacturing/` contains assembly and supplier handoff notes

!! Tools Used
- KiCad
- LTspice
- C
- GitHub
- Oscilloscope and multimeter test planning
- Thermal evaluation notes and logging templates

!! Validation Scope
Validation includes:
- input power verification
- regulator output verification
- sensor communication checks
- fan control behavior
- LED status checks
- thermal observation under load
- issue logging and revision tracking

!! Future Improvements
- Add Ethernet support
- Add current sensing for rail monitoring
- Improve thermal characterization with measured airflow data
- Add revision B layout improvements based on prototype feedback

!! Author
Alexis Garcia
