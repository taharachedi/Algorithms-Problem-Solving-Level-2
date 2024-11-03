# 📉 Problem 25: Random Array Min Finder

> **A C++ program to generate an array of random integers and find the minimum value.**

## 📦 Project Overview
This program allows users to generate an array filled with random integers within a specified range. It prompts the user to define the length of the array, fills it with random values, prints the array, and then determines the minimum value within the array.

---

## 🌟 Features
- **🔢 User-defined Length**: Users can specify the number of elements in the array.
- **🎲 Random Number Generation**: Fills the array with random integers ranging from 1 to 100.
- **📉 Minimum Value Calculation**: Calculates and displays the minimum value found in the generated array.
- **🖥️ Console Output**: Provides a clear output of the array and the minimum number.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Random_Num(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
   - **`void Fill_Array(int arr[100], int& length)`**: Prompts the user for the desired array length and fills it with random integers.
   - **`void Print_Array(int arr[100], int length)`**: Outputs the elements of the array to the console.
   - **`int Min_Array(int arr[100], int length)`**: Finds and returns the minimum value in the array.

2. **Execution Flow**:
   - The program starts in the `main()` function:
     - Sets the console color for better aesthetics.
     - Seeds the random number generator.
     - Calls `Fill_Array()` to populate the array.
     - Calls `Print_Array()` to display the array.
     - Calls `Min_Array()` to find and display the minimum value.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Num(int From, int To)`**
  - Generates a random integer using the formula:
    ```cpp
    return rand() % (To - From + 1) + From;
    ```

- **`void Fill_Array(int arr[100], int& length)`**
  - Asks the user for the array length and populates the array with random integers.

- **`void Print_Array(int arr[100], int length)`**
  - Iterates through the array and prints each element.

- **`int Min_Array(int arr[100], int length)`**
  - Finds the minimum value in the array by comparing each element.

---

## ▶️ Execution Example
When you run the program, the console output may look something like this:

```plaintext
Please Enter Array Length : 
5
Array Elements : 12 54 3 78 45 
Min Number is : 3
