# 📊 Problem 27: Random Array Average Calculator

> **A C++ program to generate an array of random integers and calculate the average of its elements.**

## 📦 Project Overview
This program allows users to create an array filled with random integers. It prompts the user to define the length of the array, fills it with random values, prints the array, and then computes the average of all the integers within the array.

---

## 🌟 Features
- **🔢 User-defined Length**: Users can specify the number of elements in the array.
- **🎲 Random Number Generation**: The array is populated with random integers ranging from 1 to 100.
- **➕ Average Calculation**: Computes and displays the average of all elements in the generated array.
- **🖥️ Console Output**: Provides clear output of the array and the calculated average.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Random_Number(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
   - **`void Fill_Array(int arr[100], int &length)`**: Prompts the user for the desired array length and fills it with random integers.
   - **`void Print_Array(int arr[100], int length)`**: Outputs the elements of the array to the console.
   - **`int Sum_Array(int arr[100], int length)`**: Calculates and returns the sum of all integers in the array.
   - **`float Average_Array(int arr[100], int length)`**: Calculates and returns the average of the elements in the array.

2. **Execution Flow**:
   - The program starts in the `main()` function:
     - Sets the console color for better aesthetics.
     - Seeds the random number generator.
     - Calls `Fill_Array()` to populate the array.
     - Calls `Print_Array()` to display the array.
     - Calls `Average_Array()` to compute and display the average of the array's elements.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Number(int From, int To)`**
  - Generates a random integer using the formula:
    ```cpp
    return rand() % (To - From + 1) + From;
    ```

- **`void Fill_Array(int arr[100], int &length)`**
  - Asks the user for the array length and populates the array with random integers.

- **`void Print_Array(int arr[100], int length)`**
  - Iterates through the array and prints each element.

- **`int Sum_Array(int arr[100], int length)`**
  - Sums all values in the array and returns the result.

- **`float Average_Array(int arr[100], int length)`**
  - Calculates the average of the array elements by dividing the sum by the number of elements.

---

## ▶️ Execution Example
When you run the program, the console output may look something like this:

```plaintext
Please Enter The Array Length : 
5
Array Elements : 12 54 3 78 45 
Average Of All Number is : 38.4
