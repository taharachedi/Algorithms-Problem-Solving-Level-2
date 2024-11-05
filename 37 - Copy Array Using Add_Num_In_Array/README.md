# 📋 Problem 37: Array Copy 

> **Generate a random array, copy its elements to another array, and display both!**

## 📘 Project Overview
This C++ program:
1. Generates an array with random numbers.
2. Copies the contents of this array into another array.
3. Displays the original and copied arrays.

---

## 🌟 Features
- **Random Number Generation**: Populates the array with random numbers between 1 and 100.
- **Array Copy Functionality**: Copies the original array elements to a new array.
- **Display of Results**: Shows both arrays, allowing for verification of the copy process.

---

## ⚙️ How It Works
### 1. Generate Random Array
- **`Random_Number(int From, int To)`**: Generates a random number between `From` and `To`.
- **`Fill_Array(int arr[100], int& length)`**: Populates an array with random numbers, and sets its length based on user input.

### 2. Copy Array
- **`Add_Number_In_Array(int arr[100], int& length, int N)`**: Adds a specified number to the next available position in the array.
- **`Copy_Array_Using(int arr[100], int arr1[100], int length, int& length1)`**: Copies each element from `arr` into `arr1` by using `Add_Number_In_Array`.

### 3. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Prints all elements in an array, separated by spaces.

---

## 📋 Code Breakdown
- **`Random_Number(...)`**: Generates a random integer within a given range.
- **`Fill_Array(...)`**: Populates `arr` with random integers, and sets its length.
- **`Add_Number_In_Array(...)`**: Adds a number to the array and updates its length.
- **`Copy_Array_Using(...)`**: Copies each element from `arr` to `arr1`.
- **`Print_Array(...)`**: Outputs the array elements to the console.

### Main Function Flow
1. Sets up console color and initializes random seed.
2. Prompts the user for array length and fills it with random values.
3. Copies the original array to a new array.
4. Prints both arrays to verify the copying process.

---

## ▶️ Sample Execution
Running the program might produce output like this:

```plaintext
Please Enter The Array Length : 
5
Array 1 Elements : 12 45 67 89 23
Array 2 Elements After Copy : 12 45 67 89 23
