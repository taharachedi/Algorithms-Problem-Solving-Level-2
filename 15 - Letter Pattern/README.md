# 📜 Problem 15: Letter Pattern Generator

> **A C++ program that generates a letter pattern based on user input.**

## 📦 Project Overview
This program prompts the user to enter a positive integer and generates a pattern of letters. Each row of the pattern displays the current letter repeated according to the row number, starting from 'A'.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive integer.
- **🔤 Letter Pattern Generation**: Creates a pattern where each row shows the current letter repeated according to its value.
- **📋 Clear Output**: Displays the generated letter pattern clearly.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and validates that it is a positive integer.
   - **`void Print_LetterPattern(int N)`**: Generates and prints the letter pattern based on the input number.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, retrieves the user input for the number, and calls `Print_LetterPattern()` to generate and display the pattern.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user to enter a positive integer and ensures that the input is greater than zero.

- **`void Print_LetterPattern(int N)`**
  - This function generates the letter pattern:
    - It starts from the ASCII value of 'A' (65) and calculates the range of letters based on the input number.
    - The outer loop iterates over the letters from 'A' up to the letter corresponding to the input number.
    - The inner loop prints the current letter, repeated according to its position.

- **`int main()`**
  - The entry point of the program, where it retrieves the user input and calls the function to print the letter pattern.

---

## ▶️ Execution Example

```plaintext
Please Enter A Positive Number : 5

A
BB
CCC
DDDD
EEEEE
