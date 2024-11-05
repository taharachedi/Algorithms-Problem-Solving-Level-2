# 🔢 Problem 50: Custom Square Root Function 

> **Calculate the square root of a number using a custom function and compare it with the built-in C++ `sqrt` function.**

## 📘 Project Overview
This C++ program:
1. Prompts the user to enter a number.
2. Computes the square root of the number using a custom square root function.
3. Compares the result with the built-in C++ `sqrt` function.

---

## 🌟 Features
- **User Input**: Accepts a floating-point number from the user.
- **Custom Square Root Function**: Implements a custom function to calculate the square root using the power function.
- **Comparison with Built-in Function**: Outputs the result from the custom function alongside the C++ `sqrt` function result.

---

## ⚙️ How It Works
### 1. Read User Input
- **`Read_Number()`**: Prompts the user to enter a number and returns it as a float.

### 2. Custom Square Root Logic
- **`My_Sqrt(float N)`**: Returns the square root of the number by raising it to the power of 0.5.

### 3. Display Results
- The main function reads a number from the user, calculates its square root using the custom function, and compares it with the result of the built-in C++ `sqrt` function.

---

## 📋 Code Breakdown
- **`Read_Number(...)`**: Handles user input.
- **`My_Sqrt(...)`**: Computes and returns the square root of a number.
- **`main()`**: Orchestrates the program flow, displaying results.

### Main Function Flow
1. Calls `Read_Number()` to get a number from the user.
2. Calculates the square root using `My_Sqrt()` and the built-in `sqrt()`.
3. Displays both results.

---

## ▶️ Sample Execution
Below is an example of the output when running the program:

```plaintext
Please Enter A Number : 
16
My Sqrt Result  : 4
C++ sqrt Result : 4
