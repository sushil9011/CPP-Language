# Escalator: Stack Implementation using Polymorphism in C++

This project demonstrates the implementation of a **Stack** data structure in C++ using an abstract base class (`Escalator`) to define the required operations. This approach utilizes **polymorphism** by defining a common interface, ensuring that the concrete `Stack` class adheres to the fundamental stack principles (**LIFO - Last-In, First-Out**).

## 🛗 Concept Visualization (The Escalator Metaphor)

The concept of a stack is analogous to an escalator: the last person to step **on** (the last element **pushed**) is the first person to step **off** (the first element **popped**).

| Stack Operation | Escalator Analogy |
| :--- | :--- |
| `push()` | Stepping onto the escalator (adding to the top) |
| `pop()` | Stepping off the escalator (removing from the top) |
| `top_element()` | Looking at the person currently on the highest step |
| `isFull()` | The escalator is completely packed with people |
| `isEmpty()` | The escalator has no one on it |

---

## Animation

The GIF below illustrates the typical push (insertion) and pop (deletion) operations in a Stack structure, demonstrating the LIFO principle.

<p align="center">
  <img src="https://raw.githubusercontent.com/sushil9011/CPP-Language/master/Escalator/Escalator.gif" alt="GIF illustrating Stack push and pop operations" style="max-width: 800px;">
</p>

---

## 💻 Code Structure (In `escalator_stack.cpp`)

The implementation is based on two main classes:

1.  **`Escalator` (Abstract Base Class)**:
    * Defines the pure virtual functions (`push`, `pop`, `display`, etc.) acting as a contractual **interface**.
    * This enforces that any derived class must implement all core stack behaviors.

2.  **`Stack` (Derived Class)**:
    * Inherits from `Escalator` and provides the concrete logic for a stack.
    * It uses a **dynamic array** (`int *arr`) for storage and an integer (`top`) to manage the current top index.

### Core Methods

| Method | Description |
| :--- | :--- |
| `push(element)` | Adds an element to the top; checks for Stack Overflow. |
| `pop()` | Removes and returns the top element; checks for Stack Underflow. |
| `top_element()` | Returns the top element without removing it (Peek). |
| `display()` | Prints all elements from top to bottom. |
| `isEmpty()` / `isFull()` | Checks the current status of the stack capacity. |

---

## 🛠️ How to Compile and Run

This program is a standard C++ console application.

### 1. Save the Code

The complete code (classes and `main` function) should be saved as a single file, e.g., `escalator_stack.cpp`.

### 2. Compile

Use a C++ compiler (like g++) to build the executable.

```bash
g++ escalator_stack.cpp -o stack_app

```

### 3. Run

Execute the compiled program from your terminal.
./stack_app
