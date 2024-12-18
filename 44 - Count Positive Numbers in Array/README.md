# 🔢 Problem 44: Positive Numbers Counter 

> **Generate an array with random values and count the positive numbers.**

## 📘 Project Overview
This C++ program:
1. Populates an array with random integer values ranging from -100 to 100.
2. Counts and displays the number of positive numbers in the array.
3. Outputs both the array elements and the count of positive numbers.

---

## 🌟 Features
- **Random Array Generation**: Generates an array of random numbers within a defined range of -100 to 100.
- **Positive Number Counting**: Calculates the count of positive numbers (greater than or equal to 0) in the array.
- **Array Display**: Outputs all elements of the array along with the count of positive numbers.

---

## ⚙️ How It Works
### 1. Generate Random Numbers in Array
- **`Random_Number(int From, int To)`**: Generates a random integer within the range `[From, To]`.
- **`Fill_Array(int arr[100], int& length)`**: Prompts the user to specify the array's length and fills `arr` with random values between -100 and 100.

### 2. Count Positive Numbers
- **`Count_Positive_Numbers(int arr[100], int length)`**: Iterates through `arr`, counting values that are positive (greater than or equal to 0). Returns the count.

### 3. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Outputs array elements to the console.

---

## 📋 Code Breakdown
- **`Random_Number(...)`**: Generates a random number within the specified range.
- **`Fill_Array(...)`**: Fills the array with random values.
- **`Print_Array(...)`**: Displays the array elements.
- **`Count_Positive_Numbers(...)`**: Counts and returns the number of positive values.

### Main Function Flow
1. Initializes the random number generator using the current time.
2. Prompts the user to specify the array length, then fills `arr` with random values.
3. Prints the array elements.
4. Outputs the count of positive numbers in the array.

---

## ▶️ Sample Execution
Below is an example of the output when running the program:

```plaintext
Please Enter The Array Length: 5

Array Elements: -32 45 -10 78 99 

Positive Numbers Count is: 3
