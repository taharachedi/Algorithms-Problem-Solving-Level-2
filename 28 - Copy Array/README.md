# 📊 Problem 28: Random Array Copy Program

> **A C++ program that generates an array of random integers and creates a copy of that array.**

## 📦 Project Overview
This program allows users to create an array filled with random integers. It prompts the user to define the length of the array, fills it with random values, prints the array, and then creates a copy of it.

---

## 🌟 Features
- **🔢 User-defined Length**: Users can specify the number of elements in the array.
- **🎲 Random Number Generation**: The array is populated with random integers ranging from 1 to 100.
- **🖨️ Array Copying**: Creates a copy of the original array and prints it.
- **🖥️ Console Output**: Provides clear output of both the original array and the copied array.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Random_Number(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
   - **`void Fill_Array(int arr[100], int& length)`**: Prompts the user for the desired array length and fills it with random integers.
   - **`void Print_Array(int arr[100], int length)`**: Outputs the elements of the array to the console.
   - **`void Copy_Array(int arr1[100], int arr[100], int length)`**: Copies the elements of the original array into another array.

2. **Execution Flow**:
   - The program starts in the `main()` function:
     - Sets the console color for better aesthetics.
     - Seeds the random number generator.
     - Calls `Fill_Array()` to populate the array.
     - Calls `Print_Array()` to display the original array.
     - Calls `Copy_Array()` to duplicate the original array.
     - Calls `Print_Array()` again to display the copied array.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Number(int From, int To)`**
  - Generates a random integer using the formula:
    ```cpp
    return rand() % (To - From + 1) + From;
    ```

- **`void Fill_Array(int arr[100], int& length)`**
  - Asks the user for the array length and populates the array with random integers.

- **`void Print_Array(int arr[100], int length)`**
  - Iterates through the array and prints each element, followed by a newline for better output formatting.

- **`void Copy_Array(int arr1[100], int arr[100], int length)`**
  - Copies all values from the original array into a new array.

---

## ▶️ Execution Example
When you run the program, the console output may look something like this:

```plaintext
Please Enter The Array Length : 
5
Array Elements  : 12 54 3 78 45 
Array1 Elements : 12 54 3 78 45 
