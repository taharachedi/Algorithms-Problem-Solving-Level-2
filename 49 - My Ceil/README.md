# 🔢 Problem 49: Custom Ceiling Function 

> **Calculate the ceiling of a number using a custom function and compare it with the built-in C++ `ceil` function.**

## 📘 Project Overview
This C++ program:
1. Prompts the user to enter a number.
2. Computes the ceiling of the number using a custom ceiling function.
3. Compares the result with the built-in C++ `ceil` function.

---

## 🌟 Features
- **User Input**: Accepts a floating-point number from the user.
- **Custom Ceiling Function**: Implements a custom function that calculates the ceiling value for both positive and negative numbers.
- **Comparison with Built-in Function**: Outputs the result from the custom function alongside the C++ `ceil` function result.

---

## ⚙️ How It Works
### 1. Read User Input
- **`Read_Num()`**: Prompts the user to enter a number and returns it as a float.

### 2. Get Fractional Part
- **`Get_Fraction_Part(float N)`**: Computes the fractional part of a number by subtracting the integer part from the original number.

### 3. Custom Ceiling Logic
- **`My_Ceil(float N)`**: Returns the smallest integer greater than or equal to the given number. If the number is positive and has a fractional part, it increments the integer part. If negative and has a fractional part, it returns the integer part without incrementing.

### 4. Display Results
- The main function reads a number from the user, calculates its ceiling value using the custom function, and compares it with the result of the built-in C++ `ceil` function.

---

## 📋 Code Breakdown
- **`Read_Num(...)`**: Handles user input.
- **`Get_Fraction_Part(...)`**: Computes and returns the fractional part of a number.
- **`My_Ceil(...)`**: Implements custom ceiling logic and returns the ceiled integer.
- **`main()`**: Orchestrates the program flow, displaying results.

### Main Function Flow
1. Calls `Read_Num()` to get a number from the user.
2. Calculates the ceiled value using `My_Ceil()` and the built-in `ceil()`.
3. Displays both results.

---

## ▶️ Sample Execution
Below is an example of the output when running the program:

```plaintext
Please Enter A Number : 
-2.3
My Ceil Result  : -2
C++ ceil Result : -2
