# 🔢 Problem 48: Custom Floor Function 
> **Calculate the floor of a number using a custom function and compare it with the built-in C++ `floor` function.**

## 📘 Project Overview
This C++ program:
1. Prompts the user to enter a number.
2. Computes the floor of the number using a custom floor function.
3. Compares the result with the built-in C++ `floor` function.

---

## 🌟 Features
- **User Input**: Accepts a floating-point number from the user.
- **Custom Floor Function**: Implements a custom function that calculates the floor value for both positive and negative numbers.
- **Comparison with Built-in Function**: Outputs the result from the custom function alongside the C++ `floor` function result.

---

## ⚙️ How It Works
### 1. Read User Input
- **`Read_Number()`**: Prompts the user to enter a number and returns it as a float.

### 2. Get Fractional Part
- **`Get_Fraction_Part(float N)`**: Computes the fractional part of a number by subtracting the integer part from the original number.

### 3. Custom Floor Logic
- **`My_Floor(float N)`**: Returns the largest integer less than or equal to the given number. If the number is positive, it returns the integer part. If negative and has a fractional part, it decrements the integer part by one.

### 4. Display Results
- The main function reads a number from the user, calculates its floor value using the custom function, and compares it with the result of the built-in C++ `floor` function.

---

## 📋 Code Breakdown
- **`Read_Number(...)`**: Handles user input.
- **`Get_Fraction_Part(...)`**: Computes and returns the fractional part of a number.
- **`My_Floor(...)`**: Implements custom floor logic and returns the floored integer.
- **`main()`**: Orchestrates the program flow, displaying results.

### Main Function Flow
1. Calls `Read_Number()` to get a number from the user.
2. Calculates the floored value using `My_Floor()` and the built-in `floor()`.
3. Displays both results.

---

## ▶️ Sample Execution
Below is an example of the output when running the program:

```plaintext
Please Enter A Number : 
-3.7
My_Floor Result  : -4
C++ Floor Result : -4
