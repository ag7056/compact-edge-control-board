# compact-edge-control-board
A compact embedded control board designed for a self-hosted edge device, featuring regulated power delivery, sensor monitoring, PCB layout, test planning, thermal evaluation, and microcontroller firmware integration.
compact-edge-control-board/
├── README.md
├── LICENSE
├── .gitignore
├── docs/
│   ├── design-overview.md
│   ├── requirements.md
│   ├── component-selection.md
│   ├── validation-plan.md
│   ├── thermal-analysis.md
│   ├── manufacturing-notes.md
│   └── revision-history.md
├── hardware/
│   ├── schematics/
│   │   ├── edge_control_board_schematic.pdf
│   │   └── edge_control_board_schematic.png
│   ├── pcb/
│   │   ├── edge_control_board_layout.pdf
│   │   ├── edge_control_board_layout.png
│   │   └── stackup-notes.md
│   ├── bom/
│   │   └── bom.csv
│   ├── simulation/
│   │   └── buck_regulator_notes.md
│   └── images/
│       ├── board_render_top.png
│       ├── board_render_bottom.png
│       └── block_diagram.png
├── firmware/
│   ├── README.md
│   ├── src/
│   │   └── main.c
│   ├── include/
│   │   └── config.h
│   └── docs/
│       └── firmware-behavior.md
├── test-results/
│   ├── bring-up-checklist.md
│   ├── voltage-validation.md
│   ├── thermal-test-log.md
│   ├── signal-integrity-notes.md
│   └── issue-log.md
└── manufacturing/
    ├── assembly-notes.md
    ├── dfm-checklist.md
    └── supplier-handoff.md
