# 🌟 Problem 3: Perfect Number Checker

> **A C++ program that determines if a given number is a perfect number.**

## 📦 Project Overview
This program allows users to enter a number and checks if it is a perfect number. A perfect number is defined as a positive integer that is equal to the sum of its proper divisors, excluding itself. For example, 6 is a perfect number because its divisors (1, 2, and 3) sum up to 6.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a number.
- **🧮 Perfect Number Checking**: Calculates the sum of proper divisors and checks if it equals the number itself.
- **📊 Clear Output**: Displays whether the input number is perfect or not.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Number(string Msg)`**: Prompts the user for input and validates that the number is non-negative.
   - **`bool isPerfect(int Num)`**: Checks if a given number is perfect by calculating the sum of its proper divisors.
   - **`void PrintResult(int Num)`**: Prints whether the number is perfect or not based on the result from `isPerfect()`.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, which calls `Read_Number()` to get the input number and then calls `PrintResult()` to display the result.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Number(string Msg)`**
  - Asks the user to enter a number and checks for non-negative input.

- **`bool isPerfect(int Num)`**
  - Calculates the sum of proper divisors of `Num` and checks if this sum equals `Num`. It iterates through numbers from 1 to \( \frac{Num}{2} \).

- **`void PrintResult(int Num)`**
  - Uses `isPerfect()` to determine if `Num` is perfect and prints the corresponding message.

- **`int main()`**
  - Calls the necessary functions to read user input and print the result.

---

## ▶️ Execution Example

```plaintext
Please Enter The Number : 6
6 is Perfect!
