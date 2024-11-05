# 📋 Problem 36: Dynamic User Array 

> **Create an array with user-defined numbers and display the contents!**

## 📘 Project Overview
This C++ program:
1. Accepts user inputs to populate an array.
2. Provides an option to keep adding numbers until the user decides to stop.
3. Displays the array's contents and its length after the inputs are complete.

---

## 🌟 Features
- **User-Defined Array Creation**: The program asks users to enter numbers to populate the array.
- **Flexible Input**: Users can decide to add more numbers after each entry.
- **Display of Results**: The array's length and elements are displayed after input is complete.

---

## ⚙️ How It Works
### 1. User Input for Array Elements
- **`Read_Number(string Msg)`**: Prompts the user to input a positive integer.
- **`Add_Number_In_Array(int arr[100], int& length, int N)`**: Adds a number to the array, updating the length.
- **`Input_User_Array(int arr[100], int &length)`**: Repeatedly prompts the user for input and calls `Add_Number_In_Array()` until the user decides to stop.

### 2. Display Array Elements
- **`Print_Array(int arr[100], int length)`**: Prints all elements in the array, with each element separated by a space.

---

## 📋 Code Breakdown
- **`Read_Number(...)`**: Ensures the user inputs a positive integer.
- **`Add_Number_In_Array(...)`**: Adds each number to the next index in the array and increments the length.
- **`Input_User_Array(...)`**: Manages user inputs and handles the option to continue adding numbers.
- **`Print_Array(...)`**: Displays the complete array after user input is finished.

### Main Function Flow
1. Set up the console color.
2. Collect user-defined numbers to fill the array.
3. Print the array length and elements.

---

## ▶️ Sample Execution
Running the program might produce output like this:

```plaintext
Please Enter A Number ?
5
Do U Want To Add More Numbers ? [0]:No , [1]:Yes  
1
Please Enter A Number ?
10
Do U Want To Add More Numbers ? [0]:No , [1]:Yes  
1
Please Enter A Number ?
15
Do U Want To Add More Numbers ? [0]:No , [1]:Yes  
0

Array Length : 3
Array Elements : 5 10 15
