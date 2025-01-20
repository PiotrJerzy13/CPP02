```markdown
# C++ Module 02: Fixed-Point Numbers and Operator Overloading

This repository contains my solutions to **C++ Module 02**, focusing on ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Class Form. While the module targets C++98, the code has been adapted to align with modern **C++17** practices for better readability and maintainability.

---

## Overview

The exercises aim to build a deeper understanding of:

- **Orthodox Canonical Class Form**: Implementing classes with default constructors, copy constructors, copy assignment operators, and destructors.
- **Fixed-Point Arithmetic**: Introducing fixed-point numbers as an alternative to integers and floating-point numbers.
- **Operator Overloading**: Enhancing class functionality with overloaded operators.
- **Modern C++ Features**: Simplifying class design using `=default` for constructors and destructors.

---

## Exercises

### **Exercise 00: My First Class in Orthodox Canonical Form**

- **Goal**: Implement a class that represents a fixed-point number in the Orthodox Canonical Form.
- **Features**:
  - A private integer to store the value.
  - A static constant integer for fractional bits.
  - Member functions to get and set raw values.
- **Modern Approach**:
  - Used `=default` for the default constructor, copy constructor, and destructor for better clarity and less boilerplate.
- **Output Example**:
  ```text
  Default constructor called
  Copy constructor called
  Copy assignment operator called
  0
  ```

### **Exercise 01: Towards a More Useful Fixed-Point Number Class**

- **Goal**: Enhance the fixed-point class with more constructors and conversion methods.
- **Features**:
  - Constructors for integers and floating-point numbers.
  - Conversion methods:
    - `toFloat()` to convert to a floating-point value.
    - `toInt()` to convert to an integer.
  - Overloading the insertion (`<<`) operator for displaying fixed-point values.
- **Modern Approach**:
  - Ensured that all new member functions adhered to `constexpr` and `const` where applicable for optimal C++17 style.
- **Output Example**:
  ```text
  a is 1234.43
  b is 10
  c is 42.4219
  d is 10
  a is 1234 as integer
  ```

### **Exercise 02: Now We're Talking**

- **Goal**: Add operator overloading to the fixed-point class.
- **Features**:
  - Comparison operators: `>`, `<`, `>=`, `<=`, `==`, `!=`.
  - Arithmetic operators: `+`, `-`, `*`, `/`.
  - Increment/Decrement operators: Pre and Post (e.g., `++a`, `a--`).
  - Static member functions:
    - `min()` to find the smaller of two fixed-point numbers.
    - `max()` to find the larger of two fixed-point numbers.
- **Modern Approach**:
  - Used `=default` for constructors, destructors, and assignment operators to simplify implementation.
  - Carefully integrated modern practices like `constexpr` for the static `min` and `max` functions.
- **Output Example**:
  ```text
  0
  0.00390625
  0.00390625
  10.1016
  10.1016
  ```

---

## How to Compile and Run

Each exercise contains a `Makefile` for easy compilation. Follow these steps:

1. Navigate to the exercise directory:
   ```bash
   cd ex00 # Replace with ex01 or ex02 for other exercises
   ```
2. Compile the code:
   ```bash
   make
   ```
3. Run the executable:
   ```bash
   ./a.out
   ```

To clean up object files and executables, run:
```bash
make clean
```

---

## Modern Practices

While the exercises are based on C++98, the code has been modernized to incorporate **C++17** features:

- Used `=default` for constructors, destructors, and assignment operators, reducing boilerplate and improving clarity.
- Leveraged `constexpr` and `const` to ensure performance and compliance with modern C++ standards.

---

## Learning Outcomes

- Mastered the concept of fixed-point arithmetic.
- Understood the importance of the Orthodox Canonical Class Form.
- Learned how to overload operators for custom classes.
- Adapted traditional C++ exercises to modern C++17 practices.
