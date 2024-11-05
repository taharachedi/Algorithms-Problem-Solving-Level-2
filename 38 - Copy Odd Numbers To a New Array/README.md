# 📋 Problem 38: Array Odd Number Filter 

> **Generate a random array, filter out odd numbers, and display both arrays!**

## 📘 Project Overview
This C++ program:
1. Generates an array with random numbers.
2. Filters odd numbers from the array into a new array.
3. Displays both the original and filtered (odd-only) arrays.

---

## 🌟 Features
- **Random Number Generation**: Populates an array with random numbers between 1 and 100.
- **Odd Number Extraction**: Copies only the odd numbers from the original array into a new array.
- **Display of Results**: Shows both the original array and the array of odd numbers for verification.

---

## ⚙️ How It Works
### 1. Generate Random Array
- **`Random_Number(int From, int To)`**: Generates a random number between `From` and `To`.
- **`Fill_Array(int arr[100], int& length)`**: Populates an array with random numbers, and sets its length based on user input.

### 2. Extract Odd Numbers
- **`Add_Number_In_Array(int arr[100], int& length, int N)`**: Adds a specified number to the next available position in the array.
- **`Copy_OddNumber_In_Array(int arr[100], int arr1[100], int length, int& length1)`**: Iterates through the original array (`arr`), and adds each odd number to a new array (`arr1`).

### 3. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Prints all elements in an array, separated by spaces.

---

## 📋 Code Breakdown
- **`Random_Number(...)`**: Generates a random integer within a given range.
- **`Fill_Array(...)`**: Populates `arr` with random integers and sets its length.
- **`Add_Number_In_Array(...)`**: Adds a number to the array and updates its length.
- **`Copy_OddNumber_In_Array(...)`**: Extracts odd numbers from `arr` into `arr1`.
- **`Print_Array(...)`**: Outputs the array elements to the console.

### Main Function Flow
1. Sets up console color and initializes random seed.
2. Prompts the user for array length and fills it with random values.
3. Copies the odd numbers from the original array to a new array.
4. Prints both arrays to verify the filtering process.

---

## ▶️ Sample Execution
Running the program might produce output like this:

```plaintext
Please Enter The Array Length : 
5
Array Elements : 12 45 67 89 23
Array Elements (Odd Numbers) : 45 67 89 23
