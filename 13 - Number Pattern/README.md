# 📊 Problem 13: Number Pattern Generator

> **A C++ program that generates a number pattern based on a user-defined positive integer.**

## 📦 Project Overview
This program prompts the user to enter a positive integer and then prints a pattern of numbers, where each row displays the current row number repeated according to the row's value.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive integer.
- **🌀 Pattern Generation**: Creates a pattern where each row contains the current row number repeated as many times as its value.
- **📋 Clear Output**: Displays the generated number pattern in a clear format.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Number(string Msg)`**: Prompts the user for input and ensures that the input number is positive.
   - **`void Print_NumberPattern(int N)`**: Generates and prints the number pattern based on the input number.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, retrieves the user input for the number, and calls `Print_NumberPattern()` to generate and display the pattern.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Number(string Msg)`**
  - Prompts the user to enter a positive integer and validates the input to ensure that it is positive.

- **`void Print_NumberPattern(int N)`**
  - This function generates the number pattern:
    - It uses a nested loop where the outer loop iterates from `1` to `N`.
    - The inner loop prints the current number `i`, repeated `i` times.

- **`int main()`**
  - The entry point of the program where it retrieves the user input and calls the function to print the number pattern.

---

## ▶️ Execution Example

```plaintext
Please Enter A Positive Number Mr.Taha : 5

1
22
333
4444
55555
