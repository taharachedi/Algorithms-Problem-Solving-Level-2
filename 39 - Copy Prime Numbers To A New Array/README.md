# 📋 Problem 39: Prime Number Filter 

> **Generate a random array, filter out prime numbers, and display both arrays!**

## 📘 Project Overview
This C++ program:
1. Generates an array with random numbers.
2. Filters the prime numbers from the array into a new array.
3. Displays both the original and filtered (prime-only) arrays.

---

## 🌟 Features
- **Random Number Generation**: Fills an array with random numbers between 1 and 100.
- **Prime Number Identification**: Uses an enumeration to label numbers as either `Prime` or `Not_Prime`.
- **Array Display**: Shows both the original array and the prime-only array for easy comparison.

---

## ⚙️ How It Works
### 1. Generate Random Array
- **`Random_Number(int From, int To)`**: Generates a random number within the specified range.
- **`Fill_Array(int arr[100], int& length)`**: Populates an array with random numbers based on user-specified length.

### 2. Check for Prime Numbers
- **`CheckPrime(int N)`**: Determines if a number is prime using a loop to check divisibility. Returns an enum value (`Prime` or `Not_Prime`).
- **`Copy_PrimeNumber_In_Array(int arr[100], int arr1[100], int length, int& length1)`**: Scans the original array (`arr`), checks each number for primality, and adds prime numbers to a new array (`arr1`).

### 3. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Outputs array elements to the console.

---

## 📋 Code Breakdown
- **`Random_Number(...)`**: Generates a random integer in the specified range.
- **`Fill_Array(...)`**: Fills `arr` with random integers and sets its length.
- **`CheckPrime(...)`**: Checks if a number is prime by testing divisibility.
- **`Copy_PrimeNumber_In_Array(...)`**: Extracts prime numbers from `arr` and copies them to `arr1`.
- **`Print_Array(...)`**: Outputs array elements to the console, space-separated.

### Main Function Flow
1. Sets console color and initializes random number generator.
2. Prompts for array length, then populates `arr` with random values.
3. Copies only prime numbers from `arr` to `arr1`.
4. Prints both `arr` (all numbers) and `arr1` (prime numbers only) to verify filtering.

---

## ▶️ Sample Execution
Here’s an example of what you might see when running the program:

```plaintext
Please Enter The Array Length : 
5
Array Elements : 12 17 23 8 19
Array Elements (Prime Numbers) : 17 23 19
