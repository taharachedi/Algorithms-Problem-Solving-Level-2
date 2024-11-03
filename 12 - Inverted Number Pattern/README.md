# 📊 Problem 12: Inverted Number Pattern Generator

> **A C++ program that generates an inverted number pattern based on a user-defined positive integer.**

## 📦 Project Overview
This program prompts the user to enter a positive integer and then prints a pattern of numbers in an inverted format, where each row displays the current number repeated according to its value.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive integer.
- **🌀 Inverted Pattern Generation**: Creates a pattern where each row consists of a number repeated as many times as its value, starting from the input number down to 1.
- **📋 Clear Output**: Displays the inverted number pattern in a clear format.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Number(string Msg)`**: Prompts the user for input and ensures that the input number is positive.
   - **`void Print_InvertedNumPattern(int N)`**: Generates and prints the inverted number pattern based on the input number.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, retrieves the user input for the number, and calls `Print_InvertedNumPattern()` to generate and display the pattern.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Number(string Msg)`**
  - Prompts the user to enter a positive integer and validates the input to ensure that it is positive.

- **`void Print_InvertedNumPattern(int N)`**
  - This function generates the inverted pattern:
    - It uses a nested loop where the outer loop iterates from `N` down to 1.
    - The inner loop prints the current number `i`, repeated `i` times.

- **`int main()`**
  - The entry point of the program where it retrieves the user input and calls the function to print the inverted pattern.

---

## ▶️ Execution Example

```plaintext
Please Enter A Number Mr.Taha : 5

55555
4444
333
22
1
