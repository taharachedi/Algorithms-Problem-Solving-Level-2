# 🔢 Problem 47: Custom Round Function 

> **Round a number using a custom rounding function and compare it with the built-in C++ `round` function.**

## 📘 Project Overview
This C++ program:
1. Prompts the user to enter a number.
2. Rounds the number using a custom rounding function.
3. Compares the result with the built-in C++ `round` function.

---

## 🌟 Features
- **User Input**: Accepts a floating-point number from the user.
- **Custom Rounding Function**: Implements a custom rounding function that handles both positive and negative numbers.
- **Comparison with Built-in Function**: Outputs the result from the custom function alongside the C++ `round` function result.

---

## ⚙️ How It Works
### 1. Read User Input
- **`Read_Num()`**: Prompts the user to enter a number and returns it as a float.

### 2. Get Fractional Part
- **`Get_Fraction_Part(float N)`**: Computes the fractional part of a number by subtracting the integer part from the original number.

### 3. Custom Rounding Logic
- **`My_Round(float N)`**: Rounds the number to the nearest integer. If the fractional part is 0.5 or greater, it rounds up; otherwise, it rounds down.

### 4. Display Results
- The main function reads a number from the user, calculates its rounded value using the custom function, and compares it with the result of the built-in C++ `round` function.

---

## 📋 Code Breakdown
- **`Read_Num(...)`**: Handles user input.
- **`Get_Fraction_Part(...)`**: Computes and returns the fractional part of a number.
- **`My_Round(...)`**: Implements custom rounding logic and returns the rounded integer.
- **`main()`**: Orchestrates the program flow, displaying results.

### Main Function Flow
1. Calls `Read_Num()` to get a number from the user.
2. Calculates the rounded value using `My_Round()` and the built-in `round()`.
3. Displays both results.

---

## ▶️ Sample Execution
Below is an example of the output when running the program:

```plaintext
Please Enter A Number : 
3.7
My_Round Result : 4
C++ round Result: 4
