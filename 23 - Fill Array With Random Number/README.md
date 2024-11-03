# 🎲 Problem 23: Random Array Generator

> **A C++ program to generate an array of random integers within a specified range.**

## 📦 Project Overview
This program generates a specified length array filled with random integers between 1 and 100. The user can define the length of the array, and the program will populate it with random values, displaying the results in the console.

---

## 🌟 Features
- **🔢 User-defined Length**: Allows users to specify how many random integers they want in the array.
- **🎲 Random Number Generation**: Utilizes a random number generator to fill the array with values between 1 and 100.
- **📊 Output Display**: Displays the generated array of integers in a user-friendly format.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Random_Num(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
   - **`void Fill_Array(int arr[100], int& length)`**: Prompts the user for the length of the array and fills it with random numbers.
   - **`void Print_Array(int arr[100], int length)`**: Prints the contents of the array.

2. **Execution Flow**:
   - The program begins in the `main()` function:
     - Sets the console color for improved aesthetics.
     - Seeds the random number generator.
     - Calls `Fill_Array()` to populate the array and then `Print_Array()` to display it.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Num(int From, int To)`**
  - Uses the formula: 
    ```cpp
    return rand() % (To - From + 1) + From;
    ```
  - Generates a random integer in the range `[From, To]`.

- **`void Fill_Array(int arr[100], int& length)`**
  - Prompts the user for the desired array length and fills it with random integers.

- **`void Print_Array(int arr[100], int length)`**
  - Iterates through the array and prints each element, separated by spaces.

---

## ▶️ Execution Example
When you run the program, the console output may look something like this:

```plaintext
Please Enter Array Length: 
5

Array Element: 23 67 34 2 91 
