# 🎲 Problem 32: Reverse Order Array Copy Program

> **🔄 A C++ program that generates an array of random integers and creates a reversed copy of the array.**

## 📦 Project Overview
This program allows users to create an array of random integers. After defining the array length, the program fills the array with random values between 1 and 100, then creates a new array that contains the elements in reverse order.

---

## 🌟 Features
- **🔢 User-defined Array Length**: Users can specify the number of elements in the array (up to 100).
- **🎲 Random Number Generation**: Fills the array with random integers ranging from 1 to 100.
- **🔄 Reverse Copy**: Copies the elements of the array into a new array in reverse order.
- **🖥️ Console Output**: Provides clear output for both the original and reversed arrays.

---

## ⚙️ How It Works
### 1. Function Definitions
- **`int Random_Number(int From, int To)`**: Generates a random integer within the range `[From, To]`.
- **`void Fill_Array(int arr[100], int& length)`**: Prompts the user for the desired array length and fills it with random integers.
- **`void Print_Array(int arr[100], int length)`**: Outputs the elements of the array to the console.
- **`void Copy_Array_InReverse_Order(int arr[100], int arr1[100], int length)`**: Copies elements from the original array into a new array in reverse order.

### 2. Program Flow
The program begins in the `main()` function:
1. Sets the console color for enhanced readability.
2. Seeds the random number generator to ensure true randomization.
3. Calls `Fill_Array()` to populate the original array with random values.
4. Calls `Print_Array()` to display the original array.
5. Calls `Copy_Array_InReverse_Order()` to create a reversed copy of the array.
6. Calls `Print_Array()` again to display the reversed array.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Number(int From, int To)`**: Generates a random integer in the specified range using:
    ```cpp
    return rand() % (To - From + 1) + From;
    ```
- **`void Fill_Array(int arr[100], int& length)`**: Prompts the user for the array length, then fills it with random integers.
- **`void Print_Array(int arr[100], int length)`**: Iterates through the array and outputs each element.
- **`void Copy_Array_InReverse_Order(int arr[100], int arr1[100], int length)`**: Copies each element from the original array into a new array in reverse order.

---

## ▶️ Sample Execution
When you run the program, the console output may look something like this:

```plaintext
Please Enter The Array Length:
5
Array1 Elements: 34 12 78 45 67 
Array2 Elements In Reverse Order: 67 45 78 12 34 
