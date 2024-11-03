# 📜 Problem 6: Sum of Digits Calculator

> **A C++ program that computes the sum of the digits of a given positive integer.**

## 📦 Project Overview
This program prompts the user to enter a positive integer and then calculates the sum of its digits, displaying the result clearly.

---

## 🌟 Features
- **🔢 User Input**: Asks the user for a positive integer.
- **➕ Digit Summation**: Computes the sum of all digits in the entered number.
- **📊 Clear Output**: Displays the calculated sum in a user-friendly manner.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures the input number is positive.
   - **`int Print_Sum_Digits(int N)`**: Computes the sum of the digits of the input number.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, which retrieves the user input via `Read_Num()` and computes the sum of the digits using `Print_Sum_Digits()`, displaying the result.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user to enter a positive integer. If the user enters a non-positive integer, it continues to prompt until a valid input is provided.

- **`int Print_Sum_Digits(int N)`**
  - Uses a loop to extract each digit of the number by:
    - Calculating the remainder when dividing by 10 (to get the last digit).
    - Dividing the number by 10 (to remove the last digit).
    - Summing the extracted digits.

- **`int main()`**
  - Calls the above functions to get user input and calculate the sum of the digits, displaying the result.

---

## ▶️ Execution Example

```plaintext
Please Enter A Number : 1234

Sum Of Digits = 10
