# 📊 Problem 10: Print Digit In Order

> **A C++ program that reverses a given positive integer and prints its digits in the order of reversal.**

## 📦 Project Overview
This program allows users to input a positive integer, reverses the digits of that integer, and displays each digit of the reversed number in the order they appear.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive integer.
- **🔄 Number Reversal**: Reverses the digits of the entered number.
- **📋 Clear Output**: Displays each digit of the reversed number on a new line, in reverse order.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures that the input number is positive.
   - **`int Reverse_Num(int N)`**: Reverses the digits of the given number.
   - **`void Print_Digit(int N)`**: Prints each digit of the reversed number on a new line.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, retrieves the user input for the number, reverses it using `Reverse_Num()`, and calls `Print_Digit()` to display the digits of the reversed number.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user to enter a positive integer. It validates input to ensure that it is positive.

- **`int Reverse_Num(int N)`**
  - This function loops through each digit of the number:
    - Extracts the last digit using the modulus operator (`%`).
    - Removes the last digit by dividing the number by 10.
    - Constructs the reversed number by multiplying the new number by 10 and adding the extracted digit.

- **`void Print_Digit(int N)`**
  - Iterates through the digits of the reversed number and prints each digit on a new line.

- **`int main()`**
  - The entry point of the program where it retrieves the user input, reverses the number, and calls the function to print the digits.

---

## ▶️ Execution Example

```plaintext
Please Enter The Main Number : 12345

1
2
3
4
5
