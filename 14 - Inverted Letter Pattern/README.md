# 📊 Problem 14: Inverted Letter Pattern Generator

> **A C++ program that generates an inverted letter pattern based on a user-defined positive integer.**

## 📦 Project Overview
This program prompts the user to enter a positive integer and then prints a pattern of letters, where each row displays the current letter repeated according to its value, starting from the specified letter down to 'A'.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive integer.
- **🌀 Inverted Letter Pattern Generation**: Creates a pattern where each row contains the current letter (starting from the specified letter down to 'A') repeated according to the row's value.
- **📋 Clear Output**: Displays the generated letter pattern in a clear format.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Number(string Msg)`**: Prompts the user for input and ensures that the input number is positive.
   - **`void Print_InvertedLetterPattern(int N)`**: Generates and prints the inverted letter pattern based on the input number.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, retrieves the user input for the number, and calls `Print_InvertedLetterPattern()` to generate and display the pattern.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Number(string Msg)`**
  - Prompts the user to enter a positive integer and validates the input to ensure that it is positive.

- **`void Print_InvertedLetterPattern(int N)`**
  - This function generates the inverted letter pattern:
    - It starts from the ASCII value of 'A' (65) and calculates the starting letter based on the input number.
    - It uses a nested loop where the outer loop iterates from the specified letter down to 'A'.
    - The inner loop prints the current letter, repeated according to its corresponding position.

- **`int main()`**
  - The entry point of the program where it retrieves the user input and calls the function to print the inverted letter pattern.

---

## ▶️ Execution Example

```plaintext
Please Enter A Positive Number Mr.Taha : 5

EEEE
DDDD
CCC
BB
A
