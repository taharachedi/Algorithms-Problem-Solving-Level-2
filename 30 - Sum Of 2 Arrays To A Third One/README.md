# 📊 Problem 30: Array Sum Program

> **A C++ program that generates two arrays of random integers and calculates the sum of their elements in a third array.**

## 📦 Project Overview
This program prompts the user to input the desired number of elements for two arrays (up to a maximum of 100). It fills both arrays with random integers and calculates the element-wise sum, storing the results in a third array. The program then displays all three arrays in the console, allowing easy verification.

---

## 🌟 Features
- **🔢 User-defined Array Length**: Allows the user to specify the length of the arrays, with a limit of 100 elements.
- **🎲 Random Number Generation**: Populates each array with random integers between 1 and 100.
- **➕ Array Element-wise Summation**: Calculates the sum of each corresponding element in the two arrays and stores the result in a new array.
- **🖥️ Console Output**: Displays both the initial arrays and the resulting sum array in the console.

---

## ⚙️ How It Works
### 1. Function Definitions
   - **`int Read_Number(string Msg)`**: Prompts the user to input a positive integer.
   - **`int Random_Number(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
   - **`void Fill_Array(int arr[100], int length)`**: Fills an array with random integers.
   - **`void Print_Array(int arr[100], int length)`**: Prints each element of an array to the console.
   - **`void Sum_Arrays(int arr1[100], int arr2[100], int sum[100], int length)`**: Adds the corresponding elements of two arrays and stores the results in a third array.

### 2. Program Flow
   - The program begins in the `main()` function:
     - Sets the console color for enhanced readability.
     - Seeds the random number generator.
     - Prompts the user for the desired length of the arrays.
     - Calls `Fill_Array()` twice to populate the two arrays with random values.
     - Calls `Sum_Arrays()` to calculate the element-wise sum of the two arrays.
     - Calls `Print_Array()` to display the contents of both initial arrays and the resulting sum array.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Number(string Msg)`**: Prompts the user for a positive integer with a custom message and returns the value entered.
  
- **`int Random_Number(int From, int To)`**: Generates a random integer using the formula:
    ```cpp
    return rand() % (To - From + 1) + From;
    ```
  
- **`void Fill_Array(int arr[100], int length)`**: Fills an array with random integers between 1 and 100.

- **`void Print_Array(int arr[100], int length)`**: Iterates through the array and prints each element to the console.

- **`void Sum_Arrays(int arr1[100], int arr2[100], int sum[100], int length)`**: Computes the element-wise sum of two arrays and stores the result in a third array.

---

## ▶️ Sample Execution
When you run the program, the console output may look something like this:

```plaintext
Please Enter The Array Length (max 100): 
10
Array1 Elements: 12 5 3 78 19 45 29 10 51 7 
Array2 Elements: 23 34 21 18 32 45 25 67 31 9 
Sum of Arrays: 35 39 24 96 51 90 54 77 82 16 
