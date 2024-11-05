# 🔢 Problem 42: Odd Numbers Counter 

> **Generate an array with random values and count the odd numbers.**

## 📘 Project Overview
This C++ program:
1. Fills an array with random integer values within a specified range.
2. Counts and displays the number of odd numbers in the array.
3. Outputs both the array elements and the count of odd numbers.

---

## 🌟 Features
- **Random Array Generation**: Populates an array with random numbers within a given range.
- **Odd Number Counting**: Determines the count of odd numbers in the array.
- **Array Display**: Outputs all elements of the array and displays the odd numbers count.

---

## ⚙️ How It Works
### 1. Generate Random Numbers in Array
- **`Random_Number(int From, int To)`**: Returns a random integer within the range `[From, To]`.
- **`Fill_Array(int arr[100], int& length)`**: Prompts the user to enter the array's length and fills `arr` with random values between 1 and 100.

### 2. Count Odd Numbers
- **`Count_Odd_Numbers_In_Array(int arr[100], int length)`**: Iterates through `arr`, counting values that are odd (not divisible by 2). Returns the count.

### 3. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Outputs array elements to the console.

---

## 📋 Code Breakdown
- **`Random_Number(...)`**: Generates a random number within the specified range.
- **`Fill_Array(...)`**: Fills the array with random values.
- **`Print_Array(...)`**: Outputs the array.
- **`Count_Odd_Numbers_In_Array(...)`**: Counts and returns the odd numbers.

### Main Function Flow
1. Initializes the random number generator with the current time.
2. Prompts the user for array length and fills `arr` with random values.
3. Prints the array elements.
4. Prints the count of odd numbers in the array.

---

## ▶️ Sample Execution
Here’s an example of the output when running the program:

```plaintext
Please Enter The Array Length: 5

Array Elements: 13 24 57 38 49 

Odd Numbers Count is: 3
