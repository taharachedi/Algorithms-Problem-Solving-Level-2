# 🎲Problem 31: Array Shuffle Program

> **🔄 A C++ program that generates an ordered array of integers and shuffles the elements randomly.**

## 📦 Project Overview
This program allows users to create an ordered array of integers based on a user-defined length. It then shuffles the array's elements randomly and displays both the original and shuffled arrays in the console.

---

## 🌟 Features
- **🔢 User-defined Array Length**: Allows the user to specify the length of the array, up to a maximum of 100 elements.
- **🎲 Ordered Array Generation**: Populates the array with ordered integers starting from 1.
- **🔀 Array Shuffling**: Randomly shuffles the elements in the array using a swap function.
- **🖥️ Console Output**: Displays the array before and after shuffling.

---

## ⚙️ How It Works
### 1. Function Definitions
- **`int Random_Number(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
- **`void Swap(int& A, int& B)`**: Swaps the values of two integer variables `A` and `B`.
- **`void Fill_Array(int arr[100], int& length)`**: Prompts the user for the array length and fills it with ordered integers.
- **`void Print_Array(int arr[100], int length)`**: Outputs the array elements to the console.
- **`void Shuffle_Array(int arr[100], int length)`**: Shuffles the array's elements by randomly swapping them.

### 2. Program Flow
The program starts in the `main()` function:
1. Sets the console color for enhanced readability.
2. Seeds the random number generator for true randomization.
3. Calls `Fill_Array()` to create an ordered array.
4. Calls `Print_Array()` to display the original array.
5. Calls `Shuffle_Array()` to shuffle the array.
6. Calls `Print_Array()` again to display the shuffled array.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Number(int From, int To)`**: Generates a random integer in the specified range using:
    ```cpp
    return rand() % (To - From + 1) + From;
    ```
- **`void Swap(int& A, int& B)`**: Swaps the values of two variables.
- **`void Fill_Array(int arr[100], int& length)`**: Populates an array with ordered integers based on user-defined length.
- **`void Print_Array(int arr[100], int length)`**: Outputs each element of the array.
- **`void Shuffle_Array(int arr[100], int length)`**: Randomly swaps elements in the array to shuffle it.

---

## ▶️ Sample Execution
When you run the program, the console output may look something like this:

```plaintext
Please Enter The Array Length:
10
Array Elements before Shuffle:
1 2 3 4 5 6 7 8 9 10 
Array Elements After Shuffle:
7 3 10 1 5 9 6 2 4 8 
