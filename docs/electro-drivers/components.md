# Components Design Specification

**Preface:**
The components design specification is to provide solutions to the previously stated problem parts in the [problem document](https://github.com/Electrostat-Lab/Electrostatic-Drivers/blob/master/docs/electro-drivers/problem.md). 

A **component** is a piece of software or a physical hardware or a conceptual model that targets a specific part of the problem; though commonly a component is a piece of software from a high-level perspective.

**Driver component-based diagrams** provide structural overview of the overall system to solve a particular set of problems in the driver development domain.

## Table of contents:
1) Entity-Structural Components.
    * Section 1.1: Abstract Definitions and General Layout.
    * Section 1.2: Defining system parts.
2) Machine Components.
    * Section 2.1: Abstract Definitions and General Layout.
    * Section 2.2: Defining the _Electrostatic-Drivers_ system machine.

## 1) Entity-Structural Components:

### Section 1.1: Abstract Definitions and General Layout

**General definition**: Entity-Structural components design model starts by defining the structural components of the system first; then grouping those components under entities.

**Mathematical Abstraction**: The system structure could be represented as **structural sets of components**; such that each set define **structural properties** in the form of a predicate function, and components from a set must match those properties, otherwise they wouldn't be eligible to be grouped under this structural set.

**Lemma.01**: Let $E$ be the entity-structural framework; a set that groups all **the structural sets of the system components**; with a single common property is that they are **structural sets of components**, $\Gamma$ be a structural set of components, $\gamma$ be a component of that structural set, and $P(...)$ be a predicate function defining a property for that component.

* $$E = \bigcup_{i=0}^{n} \Gamma_{i}$$
* $$\Gamma = \\{\bigcup_{i=0}^{n} \gamma_{i}: i \in N \land \gamma\ is\ a\ structural\ set\ of\ components. \land \gamma_{i}\ has\ P_{i}(...)\ set\ of\ predicates.\\}$$
* $$P_{i}(...) = \bigwedge_{i=0}^{n} p_{i}(...)$$

> [!NOTE]
> All structural sets are in **uppercase Greek letters**, while structural components are in **lowercase Greek letters**, including the predicate functions defining the properties of a specific component.
>

### Section 1.2: Defining system parts



## 2) Machine Components:

### Section 2.1: Abstract Defintions and General Layout

**General definition**: Machine components design model starts by defining a set of states $Q$; define an initial state $q_0$; a set of final states $F$; a set of alphabets $\Sigma$ representing the input space; a transition function $\delta(s_0, \sigma) \rightarrow s_1$.

**Mathematical Abstraction**: The system automata define how the system transits from a state to another to achieve a specific task; therefore they could be represented as a **set of machines**, with a common single property that they are quintuple state-machines; such that each machine is quintuple of: **(1) A set of states from which the transition function picks up.** **(2) A transition function from a state to another with an input.** **(3) A set of input from which the transition function picks up.** **(4) A start state from which the whole system get turned on.** **(5) A set of final accepting states, at which the system could terminate.** **(6) Other mathematical structures and memory structures that target the non-functional problems.** 

**Lemma.02**: Let $M_c$ be a machine that describes the state transitions for components or structures that were mentioned earlier in **part (01)** of this document; where $c$ is an identifier to that component, whether functional or non-functional; $\delta(q_{i}, \sigma_{i}) \rightarrow q_{i+1}$ be a function that accepts current state, and an input, and transits the machine to the next state; $Q$ be a set of machine states that are associated with each structural component, and from which the transition function $\delta$ selects and outputs to; $\Sigma$ be a set of input alphabets from which the $\delta$ transition function selects as an input; $q_0$ is the initial or the starting state from which the overall machine starts; $F$ be a set of the final accepting states for that machine by which the machine shuts down; $\Gamma$ be an additional structure housing non-functional associations.


> [!NOTE]
> Machines are system components that are used for **initializing**, **allocating memory**, **transmitting and receiving data**, **encoding/decoding and encrypting/decrypting data**, **de-initializing**, and **deallocating resources** for system components. Furthermore, communication with other components is mediated through system machines. Therefore, in a system design; each component is associated with a state machine. A state machine can be further abstracted in the previously mentioned **Entity-Structural Framework** as properties of the structural components.
>

* $$M_c = \\{ Q, \Sigma, \delta(q_{i}, \sigma_{i}) \rightarrow q_{i+1}, q_0, F, \Gamma\\}$$
