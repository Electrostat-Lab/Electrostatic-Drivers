# Design Problem Specification

**Preface:**  
The problem statement is to provide:  
1. Controlling a conventional I/O interface over another I/O interface; commonly known as **"I/O Emulation"**.  
2. Writing Serial and Parallel programming interfaces for Embedded Bare-Metal MCU over the Super I/O Chips controllers. (Deferred for later revisit).  

---

## Table of Contents
1. Design Problem Specification  
   * 1.1 Functional Problem Bulk  
   * 1.2 Functional Problems Decomposition  
   * 1.3 Non-functional Problems  
   * 1.4 Problem-Problems Relationship  
2. Design Implications
   * 2.1 Modus Ponens
   * 2.2 Modus Tollens

---

## 1) Design Problem Specification:

### Section 1.1: Functional Problem Bulk

Functional problem formula:  

$$
P_{functional} = \{ P_{I/O\ Emulation\ of\ IO-2\ interface\ over\ I/O-1\ interface},\ 
P_{Compatible\ I/O\ architectures} \}
$$  

> [!NOTE]  
> * $P_{Compatible\ I/O\ architectures}$: is defined as a functional problem that arises as a result of various manufacturers for the same category of devices (e.g., Super I/O Chips), and even the variations across the same device family.  

---

### Section 1.2: Functional Problems Decomposition

This section attempts to further break the large bulk of problems into manageable sub-problems.  
The final sub-problems set is a subset of the original bulk set presented in **Section 1.1**.  

Functional problems decomposition formula:  

$$
P_{functional} = \{ P_{I/O\ Emulator\ Interface},\ 
P_{I/O\ Emulated\ Interface},\ 
P_{Emulation\ Kernel\ Engine},\ 
P_{Emulation\ User\ Engine} \}
$$  

> [!NOTE]  
> * $P_{I/O\ Emulator\ Interface}$: is defined as the hardware-software interface through which the emulation is facilitated. It could be an input or an output interface; being an **Emulator** interface denotes that it sends the emulation commands to the emulation engine components to emulate another I/O interface.  
> * $P_{I/O\ Emulated\ Interface}$: is defined as the hardware-software interface which is emulated by the emulation engine. It could be an input or an output interface; being an **Emulated** interface denotes dependence on the **Emulation Engine** and compatibility upon the **Emulator** interface, as the **emulated** interface receives input from the **Emulation Engine**.  

---

### Section 1.3: Non-functional Problems

This section extracts the part that examines non-functional requirements.  
These parts of the problem are not playing an explicit role in the functional requirements scheme, but rather level up the safety, reliability, robustness, resilience, and security, contributing to the overall software performance.  

Non-functional problems formula:  

$$
P_{Non-functional} = \{
P_{I/O\ resources\ shared\ acquisition},\ 
P_{I/O\ Locked\ threaded\ init},\ 
P_{I/O\ Locked\ error\ handling},\ 
P_{I/O\ init\ fallback\ to\ compatible\ devices},\ 
P_{I/O\ R/W\ Clock\ Cycle},\ 
P_{Programmed\ threaded\ interrupted\ I/O},\ 
P_{I/O\ resources\ release},\ 
P_{I/O\ device\ de-init},\ 
P_{Linux\ VFS},\ 
P_{Emulation\ VM} \}
$$  

---

### Section 1.4: Problem-Problems Relationship

Representing relationships among different problems is an essential task to understand the overall system behavior, and thus map the components to their problems later. Relationships can be represented using relations mapping; there is a bijective, injective, and surjective mappings.  

Functional and non-functional problems are closely related to one another; therefore the following relation mappings could be attained:  

* Let $M_{IO}(p)$ be a set of ordered pairs that maps a functional problem to other non-functional problems; such that $p$ is an input/output interface problem for a physical or virtual I/O device.  

$$
M_{IO}(p) = \{
(P_{p}, P_{I/O\ resources\ shared\ acquisition}),\ 
(P_{p}, P_{I/O\ Locked\ threaded\ init}),\ 
(P_{p}, P_{I/O\ Locked\ error\ handling}),\ 
(P_{p}, P_{I/O\ init\ fallback\ to\ compatible\ devices}),\ 
(P_{p}, P_{I/O\ R/W\ Clock\ Cycle}),\ 
(P_{p}, P_{Programmed\ threaded\ interrupted\ I/O}),\ 
(P_{p}, P_{I/O\ resources\ release}),\ 
(P_{p}, P_{I/O\ device\ de-init}),\ 
(P_{p}, P_{Linux\ VFS}),\ 
(P_{p}, P_{Emulation\ VM}) \}
$$  

* Let $M_{Engine}(p)$ be a set of ordered pairs that maps a functional problem to other non-functional problems; such that $p$ is an engine interface problem for providing the emulation of an I/O interface over the other; an engine could be a **user-space** engine or a **kernel-space** engine.  

$$
M_{Engine}(p) = \{
(P_{p}, P_{I/O\ R/W\ Clock\ Cycle}),\ 
(P_{p}, P_{Linux\ VFS}),\ 
(P_{p}, P_{Char/Block\ Devices}),\
(P_{p}, P_{Emulation\ VM}),\ 
(P_{p}, P_{I/O\ Operation\ Lifecycle}) \}
$$  


## 2) Design Implications:

-- Deferred --