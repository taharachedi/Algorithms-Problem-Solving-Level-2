# 🎲 Problem 19: Random Number Generator

> **A simple C++ program that generates random numbers within a specified range.**

## 📦 Project Overview
This program demonstrates the use of the C++ standard library to generate random numbers. It includes a function to generate random integers within a given range and displays a few random numbers as output.

---

## 🌟 Features
- **🎲 Random Number Generation**: Generate random integers within a defined range (1 to 10).
- **🔄 Random Seed Initialization**: Uses a seed based on the current time to ensure different random sequences each time the program runs.
- **🖨️ Output Display**: Displays generated random numbers to the console.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Random_Number(short From, short To)`**: This function generates a random number between the specified `From` and `To` values:
     - Utilizes the `rand()` function and adjusts the output to fit the specified range.
   - The function uses the modulus operator to ensure that the result is within the desired range.

2. **Execution Flow**:
   - The program begins in the `main()` function:
     - Sets console color for visual appeal.
     - Seeds the random number generator using `srand((unsigned)time(NULL))`, ensuring different results on each execution.
     - Calls `Random_Number(1, 10)` multiple times to demonstrate its functionality.
     - Displays additional random numbers using the default `rand()` function.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Number(short From, short To)`**
  - Generates a random integer between the specified `From` and `To` values:
    - The formula used: `rand() % (To - From + 1) + From`.
    - This calculates the range and shifts the result to start from `From`.

- **`int main()`**
  - The entry point of the program:
    - Changes the console color using `system("color f4")`.
    - Seeds the random number generator.
    - Calls the `Random_Number` function multiple times to display random numbers.
    - Additionally, it prints a random number using the basic `rand()` function.

---

## ▶️ Execution Example
When you run the program, you will see output similar to this:

```plaintext
9
2
5
---------------------------
Random Number : 1923406410
