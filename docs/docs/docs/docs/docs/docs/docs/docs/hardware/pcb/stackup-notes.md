# PCB Stackup Notes

## Stackup
This design assumes a 4-layer PCB stackup:
- Layer 1: signal and component placement
- Layer 2: ground plane
- Layer 3: power distribution and signal routing
- Layer 4: signal and secondary placement

## Rationale
A 4-layer structure was chosen to improve return paths, reduce noise, and support cleaner power distribution in a compact design.

## Layout Priorities
- isolate switching power region from logic
- maintain short regulator loops
- route I2C cleanly and avoid noisy areas
- keep debug access easy to reach
- preserve ground continuity where possible
