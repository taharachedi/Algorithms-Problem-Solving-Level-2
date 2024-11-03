# 📜 Problem 5: Digit Printer

> **A C++ program that prints the digits of a given number in reverse order.**

## 📦 Project Overview
This program allows users to input a positive integer and outputs each digit of that number on a new line, starting from the least significant digit (the rightmost digit).

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive number.
- **🔄 Reverse Digit Output**: Prints each digit of the number from right to left (in reverse order).
- **📊 Clear Output**: Displays the digits, each on a new line for clarity.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures that the number is positive.
   - **`void PrintDigit(int N)`**: Extracts and prints each digit of the number in reverse order.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, which calls `Read_Num()` to get the user's number and `PrintDigit()` to display the digits.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Asks the user to enter a positive integer and validates the input. If the input is not positive, it prompts the user again.

- **`void PrintDigit(int N)`**
  - Uses a loop to extract and print each digit of the number by:
    - Calculating the remainder when dividing by 10 (to get the last digit).
    - Dividing the number by 10 (to remove the last digit).
    - Printing the extracted digit.

- **`int main()`**
  - Coordinates the program execution by reading user input and displaying the digits in reverse order.

---

## ▶️ Execution Example

```plaintext
Please Enter A Number : 1234

4
3
2
1
