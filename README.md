<img src="https://github.com/Electrostat-Lab/Electrostatic-Drivers/res/linux-tux-svgrepo-com.png" width="250" height="250" />
# Electrostatic-Drivers

This repository offers extension drivers to the `Project: ElectroKIO` from the [Electrostatic-Sandbox SDK](https://github.com/Electrostat-Lab/Electrostatic-Sandbox), an SDK suite for distributed simulation software. 

## Table of contents:
1. Preface.
2. The Core Kernel Driver Model.
   * 2.1 Architectural Diagram.
   * 2.2 Terminology.
   * 2.3 Data Structures.
   * 2.4 Core Implementation on the Kernel Sources.
3. The Electrostatic-Drivers Model.
   * 3.1 Architectural Diagram.
   * 3.2 Terminology.
   * 3.3 Bus Drivers.
   * 3.4 Device Drivers and Devices.
   * 3.5 Building Hardware.
   * 3.6 The ITE Super I/O Chips (IT87xx).
   * 3.7 Techniques for wiring the Hardware on Gigabyte motherboards.
4. Relations with the user-space `Project: ElectroKIO`.
   * 4.1 Kernel-to-userspace Caller Graph.
   * 4.2 Example software.
5. Build System and Source Trees.
   * 5.1 The build system automata.
   * 5.2 The build system tree.
   * 5.3 Building and inserting with the SDK.