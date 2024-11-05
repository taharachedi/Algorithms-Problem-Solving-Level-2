# 🔍 Problem 34: Random Number Array & Search 

> **Find the position and order of a specific number within a randomly generated array!**

## 📘 Project Overview
This C++ program generates an array of random integers, displays the array, and allows the user to search for a specific number within it. The program provides feedback on whether the number is found and, if so, its position and order in the array.

---

## 🌟 Features
- **🔢 Random Array Generation**: Creates an array with random integers between 1 and 100.
- **🔍 Search Functionality**: Allows the user to search for a specific number within the array.
- **📋 Position & Order Display**: Displays both the array position (index) and the order (1-based) of the found number.
- **🟥 Color Feedback**: Changes the console color based on the search result (found or not found).

---

## ⚙️ How It Works
### 1. Random Array Generation
- **`Fill_Array(int arr[100], int& length)`**: Asks the user for the array length and fills it with random integers between 1 and 100.

### 2. User Input and Search
- **`Read_Number(string Msg)`**: Prompts the user to enter a positive integer to search for.
- **`Position_Array(int arr[100], int length, int N)`**: Searches for the number `N` in the array and returns its position or `-1` if not found.

### 3. Display Results
- **`Print_Array(int arr[100], int length)`**: Prints the array elements.
- **Console Feedback**: The console color changes to indicate the search result:
  - Green if the number is found
  - Red if the number is not found

---

## 🛠️ Code Breakdown
### 🔹 Key Components
- **Random Array Filling**: Populates an array with random numbers within a specified range.
- **User Input & Validation**: Ensures the user enters a positive integer for the search.
- **Search and Position Display**: Outputs the 0-based index and the 1-based order if the number is found.

### Main Function Flow
1. Set the console color.
2. Prompt the user for the array length and fill the array with random numbers.
3. Display the array.
4. Prompt the user for a number to search within the array.
5. Display the search result, including position/order if found, and console color feedback.

---

## ▶️ Sample Execution
Running the program produces output similar to this:

```plaintext
Please Enter The Array Length:
5
Array1 Elements:
43 7 15 22 7 

Please Enter A Number To Search For?
7

The Number You Are Looking for is: 7
The Number Found at Position: 1
The Number Found its Order: 2
