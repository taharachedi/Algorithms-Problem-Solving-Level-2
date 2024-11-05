# 🔢 Problem 35: Random Number Array & Search 

> **Generate a random array and search for a specific number with position-based feedback!**

## 📘 Project Overview
This C++ program:
1. Generates an array of random numbers between 1 and 100.
2. Allows the user to search for a specific number within this array.
3. Provides feedback on whether the number is found and highlights its position.

---

## 🌟 Features
- **Random Array Generation**: Creates an array with random integers in a user-specified length.
- **Search Functionality**: Allows the user to search for a specific number within the array.
- **Color Feedback**: The console color changes to indicate whether the number was found (green) or not (red).

---

## ⚙️ How It Works
### 1. Random Array Generation
- **`Fill_Array(int arr[100], int& length)`**: Prompts the user for an array length, then fills it with random numbers between 1 and 100.

### 2. User Input and Search
- **`Read_Num(string Msg)`**: Asks the user to enter a positive integer to search within the array.
- **`isNumber_In_Array(int arr[100], int length, int N)`**: Checks if the specified number exists in the array.
- **`Find_Number_Position_In_Array(int arr[100], int length, int N)`**: Returns the position of the number if found, or `-1` if not.

### 3. Display Results
- **`Print_Array(int arr[100], int length)`**: Prints the array elements.
- **Color-Coded Output**: The console color changes based on the search result:
  - Green if the number is found
  - Red if the number is not found

---

## 📋 Code Breakdown
- **`Random_Number(int From, int To)`**: Generates a random number in a specified range.
- **`isNumber_In_Array(...)`** and **`Find_Number_Position_In_Array(...)`**: Check for the number's presence and return its position.

### Main Function Flow
1. Set up the console color.
2. Generate a random array and display its contents.
3. Prompt the user to enter a number to search for in the array.
4. Output search results, including color-coded console feedback.

---

## ▶️ Sample Execution
Running the program produces output similar to this:

```plaintext
Please Enter The Array Length:
5
Array 1 Elements:
43 7 15 22 56 

Please Enter A Number To Search For:
7

Number You Are Looking For is: 7
Yes, The Number is Found.
