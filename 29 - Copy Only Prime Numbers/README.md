# Problem 29: Prime Number Filter Program

> **A C++ program that generates an array of random integers and extracts the prime numbers into a separate array.**

## 📦 Project Overview
This program allows users to create an array filled with random integers. It prompts the user for the desired length of the array, fills it with random values, identifies which of those values are prime numbers, and stores them in a separate array.

---

## 🌟 Features
- **🔢 User-defined Length**: Users can specify the number of elements in the array (maximum of 100).
- **🎲 Random Number Generation**: The array is populated with random integers ranging from 1 to 100.
- **🖨️ Prime Number Filtering**: The program identifies prime numbers in the original array and creates a new array to store them.
- **🖥️ Console Output**: Provides clear output of both the original array and the array of prime numbers.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`enCheckPrime isPrime(int N)`**: Checks if the given integer `N` is prime.
   - **`int Random_Number(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
   - **`void Fill_Array(int arr[100], int& length)`**: Prompts the user for the desired array length and fills it with random integers.
   - **`void Print_Array(int arr[100], int length)`**: Outputs the elements of the array to the console.
   - **`void Copy_OnlyPrime_Array(int arr1[100], int arr[100], int length, int& length1)`**: Copies all prime numbers from the original array to a new array.

2. **Execution Flow**:
   - The program starts in the `main()` function:
     - Sets the console color for better aesthetics.
     - Seeds the random number generator.
     - Calls `Fill_Array()` to populate the array.
     - Calls `Print_Array()` to display the original array.
     - Calls `Copy_OnlyPrime_Array()` to filter out the prime numbers.
     - Calls `Print_Array()` again to display the prime array.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`enCheckPrime isPrime(int N)`**
  - Returns `Prime` if `N` is a prime number and `NotPrime` otherwise.

- **`int Random_Number(int From, int To)`**
  - Generates a random integer using the formula:
    ```cpp
    return rand() % (To - From + 1) + From;
    ```

- **`void Fill_Array(int arr[100], int& length)`**
  - Asks the user for the array length (maximum 100) and populates the array with random integers.

- **`void Print_Array(int arr[100], int length)`**
  - Iterates through the array and prints each element.

- **`void Copy_OnlyPrime_Array(int arr1[100], int arr[100], int length, int& length1)`**
  - Filters the original array for prime numbers and stores them in a new array.

---

## ▶️ Execution Example
When you run the program, the console output may look something like this:

```plaintext
Please Enter The Array Length (max 100): 
10
Array Elements       : 12 5 3 78 19 45 29 10 51 7 
Prime Array Elements : 5 3 19 29 7 
