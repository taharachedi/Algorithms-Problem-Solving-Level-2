# 🔢 Problem 46: Absolute Value Calculator 

> **Calculate the absolute value of a number using a custom function and compare it with the built-in C++ `abs` function.**

## 📘 Project Overview
This C++ program:
1. Prompts the user to enter a number.
2. Calculates the absolute value using a custom function.
3. Compares the result with the built-in C++ `abs` function.

---

## 🌟 Features
- **User Input**: Accepts a number from the user.
- **Custom Absolute Value Function**: Implements a custom function to calculate the absolute value.
- **Comparison with Built-in Function**: Outputs the result from the custom function alongside the C++ `abs` function result.

---

## ⚙️ How It Works
### 1. Read User Input
- **`Read_Number()`**: Prompts the user to enter a number and returns it as a float.

### 2. Calculate Absolute Value
- **`My_ABS(float N)`**: Returns the absolute value of `N`. If `N` is negative, it multiplies it by -1 to return the positive equivalent.

### 3. Display Results
- The main function reads a number from the user, calculates its absolute value using the custom function, and compares it with the result of the built-in C++ `abs` function.

---

## 📋 Code Breakdown
- **`Read_Number(...)`**: Handles user input.
- **`My_ABS(...)`**: Computes and returns the absolute value of a number.
- **`main()`**: Orchestrates the program flow, displaying results.

### Main Function Flow
1. Calls `Read_Number()` to get a number from the user.
2. Calculates the absolute value using `My_ABS()` and the built-in `abs()`.
3. Displays both results.

---

## ▶️ Sample Execution
Below is an example of the output when running the program:

```plaintext
Please Enter A Number 
-23.5
My_ABS Result  : 23.5
C++ abs Result : 23.5
