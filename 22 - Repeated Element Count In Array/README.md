# 📊 Problem 22: Array Repetition Checker

> **A C++ program to check how many times a specified number appears in an array of integers.**

## 📦 Project Overview
This program allows users to input an array of integers and check how many times a specific number appears in that array. It provides a simple console interface for interaction.

---

## 🌟 Features
- **🔢 User-defined Input**: Users can specify the length of the array and input the elements.
- **🔍 Number Checking**: Users can check the frequency of any specified number in the array.
- **📋 Input Validation**: Ensures that the user enters a positive integer for both the array length and the number to check.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Number(string Msg)`**: Prompts the user for input until a valid positive integer is entered.
   - **`void Read_ArrayElement(int Element[100], int& Length)`**: Reads the elements of the array from user input.
   - **`void Print_ArrayElement(int Element[100], int length)`**: Displays the elements of the array.
   - **`int Time_Repeated(int NumberToCheck, int array[100], int length)`**: Counts how many times the specified number appears in the array.

2. **Execution Flow**:
   - The program starts in the `main()` function:
     - Prompts the user to enter the array length and the array elements.
     - Asks for the number to check and calls the `Time_Repeated()` function to display the count of repetitions.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Number(string Msg)`**
  - Prompts the user for input and validates it to ensure a positive integer is entered.
  
- **`void Read_ArrayElement(int Element[100], int& Length)`**
  - Reads the number of elements and their values into the specified array.

- **`void Print_ArrayElement(int Element[100], int length)`**
  - Prints the elements of the array for user reference.

- **`int Time_Repeated(int NumberToCheck, int array[100], int length)`**
  - Counts occurrences of the specified number in the array and returns the count.

---

## ▶️ Execution Example
When you run the program, the console output may look something like this:

```plaintext
Please Enter Array Length: 
5
Enter Array Elements: 
Element [1]: 1
Element [2]: 2
Element [3]: 1
Element [4]: 4
Element [5]: 1

Enter The Number You Want To Check: 1
Original array: 1 2 1 4 1 
1 is repeated 3 time(s).
