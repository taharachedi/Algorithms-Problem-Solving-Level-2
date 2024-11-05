# 📋 Problem 40: Unique Element Filter 

> **Identify distinct values from a predefined array and display both original and distinct arrays!**

## 📘 Project Overview
This C++ program:
1. Fills an array with predefined values containing duplicates.
2. Filters and copies only distinct values to a new array.
3. Displays both the original and filtered (distinct-only) arrays.

---

## 🌟 Features
- **Predefined Array Filling**: Quickly initializes an array with specific values containing duplicates.
- **Unique Element Extraction**: Identifies and copies only unique elements from one array to another.
- **Array Display**: Shows both the original array and the distinct-only array for easy verification.

---

## ⚙️ How It Works
### 1. Initialize the Array
- **`Fill_Array(int arr[100], int& length)`**: Populates `arr` with predefined integer values, setting `length` to 10.

### 2. Filter for Distinct Values
- **`Find_Number_Position_In_Array(int arr[100], int length, int N)`**: Returns the position of a number in the array or `-1` if it doesn’t exist.
- **`isNumber_In_Array(int arr[100], int length, int N)`**: Checks if a number is already in the array.
- **`Copy_Distinct_Numbers_To_Array(int arr[100], int arr1[100], int length, int& length1)`**: Goes through `arr`, and copies only unique values to `arr1`.

### 3. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Outputs array elements to the console.

---

## 📋 Code Breakdown
- **`Fill_Array(...)`**: Sets initial values with duplicates in `arr`.
- **`Add_Numbers_In_Array(...)`**: Adds an element to the array and updates its length.
- **`Find_Number_Position_In_Array(...)`**: Searches for a number’s index within the array.
- **`isNumber_In_Array(...)`**: Checks if a specific number is already present in an array.
- **`Copy_Distinct_Numbers_To_Array(...)`**: Scans `arr` and copies only distinct numbers to `arr1`.
- **`Print_Array(...)`**: Outputs array elements to the console.

### Main Function Flow
1. Sets console color for output and initializes `arr` with predefined values.
2. Copies only unique values from `arr` to `arr1`.
3. Prints both `arr` (all values) and `arr1` (distinct values only) to verify filtering.

---

## ▶️ Sample Execution
Here’s an example of what you might see when running the program:

```plaintext
Array1 Elements : 10 10 10 50 50 70 70 70 70 90 
Array2 Distinct Elements : 10 50 70 90 
