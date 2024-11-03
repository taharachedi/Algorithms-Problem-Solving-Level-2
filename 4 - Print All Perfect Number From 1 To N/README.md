# 🌟 Problem 4: Perfect Number Finder

> **A C++ program that finds and prints all perfect numbers up to a given limit.**

## 📦 Project Overview
This program allows users to specify an upper limit \( N \) and calculates all perfect numbers from 1 to \( N \). A perfect number is defined as a positive integer that is equal to the sum of its proper divisors, excluding itself. For example, 6 is a perfect number since its divisors (1, 2, and 3) sum to 6.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter an upper limit \( N \).
- **🧮 Perfect Number Calculation**: Identifies and sums the proper divisors to check for perfect numbers.
- **📊 Clear Output**: Displays all perfect numbers within the specified range.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures the number is positive.
   - **`bool isPerfect(int N)`**: Checks if a number \( N \) is perfect by summing its proper divisors.
   - **`void Print_All_Perfect(int N)`**: Loops through all numbers from 1 to \( N \) and prints those that are perfect.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, which calls `Read_Num()` to get the upper limit and `Print_All_Perfect()` to display the results.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Asks the user to enter a positive number and validates the input.

- **`bool isPerfect(int N)`**
  - Computes the sum of proper divisors of \( N \) and returns true if the sum equals \( N \).

- **`void Print_All_Perfect(int N)`**
  - Prints all perfect numbers from 1 to \( N \) by checking each number with `isPerfect()`.

- **`int main()`**
  - Coordinates the execution by reading user input and displaying the perfect numbers.

---

## ▶️ Execution Example

```plaintext
Please Enter The Last Number N : 28

The Perfect Numbers From 1 To 28 :
6
28
