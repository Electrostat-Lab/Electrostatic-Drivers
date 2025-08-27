# Linux Kernel Driver Model

The following document briefly describes the core Linux Kernel Driver Model for which hardware devices are wired with both device drivers and bus drivers, and the interactions between the user-space API and the kernel-space API to synchronize and control the hardware devices.

## Table of contents:
1. Preface
2. Architectural Diagram.
   * 2.1 Board diagram.
   * 2.2 Dot component-based diagram.
   * 2.3 Automata diagram.
   * 2.4 Formal Quantificational Logic.
3. Terminology.
4. Data Structures, functions, and macros.
   * 4.1 Driver Modules.
   * 4.2 Specialized Drivers.
   * 4.3 Bus Drivers.
   * 4.4 Device Drivers and devices.
   * 4.5 Why bus drivers abstractions?
   * 4.6 The core Driver Module Loader.
5. Core Implementation.
   * 5.1 Core algorithms to load/unload modules.
   * 5.2 Tree traversal algorithms for bus drivers.
   * 5.3 Pattern matching algorithms for devices and device drivers.

