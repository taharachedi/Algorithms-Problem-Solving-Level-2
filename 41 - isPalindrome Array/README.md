# 🔄 Problem 41: Palindrome Array Checker

> **Determine if a predefined array is a palindrome.**

## 📘 Project Overview
This C++ program:
1. Fills an array with predefined values.
2. Checks if the array is a palindrome, meaning it reads the same forwards and backwards.
3. Displays the array and prints whether it is a palindrome.

---

## 🌟 Features
- **Array Initialization**: Quickly populates an array with specific values.
- **Palindrome Check**: Determines if the array reads identically from both ends.
- **Array Display**: Outputs the array elements and palindrome result.

---

## ⚙️ How It Works
### 1. Initialize the Array
- **`Fill_Array(int arr[100], int& length)`**: Populates `arr` with predefined integer values and sets `length` to 6.

### 2. Check if Array is Palindrome
- **`isPalindrome_Array(int arr[100], int length)`**: Loops through the array, comparing elements from the start and end, moving towards the middle. Returns `true` if all mirrored elements match, otherwise `false`.

### 3. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Outputs array elements to the console.

---

## 📋 Code Breakdown
- **`Fill_Array(...)`**: Sets initial values in `arr`.
- **`Print_Array(...)`**: Outputs array elements to the console.
- **`isPalindrome_Array(...)`**: Checks if the array is a palindrome by comparing mirrored elements from the start and end.

### Main Function Flow
1. Sets console color for output.
2. Initializes `arr` with predefined values.
3. Prints the array.
4. Checks if `arr` is a palindrome and prints the result.

---

## ▶️ Sample Execution
Here’s an example of the output when running the program:

```plaintext
Array Elements : 10 20 30 30 20 10 

Yes, Array is Palindrome
