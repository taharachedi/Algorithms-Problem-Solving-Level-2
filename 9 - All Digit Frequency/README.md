# 📊 Problem 9: Digit Frequency Counter

> **A C++ program that counts the frequency of each digit (0-9) in a given positive integer.**

## 📦 Project Overview
This program allows users to input a positive integer and calculates the frequency of each digit appearing in that integer, displaying the results in a clear format.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive integer.
- **📊 Digit Frequency Calculation**: Computes how many times each digit from 0 to 9 appears in the entered number.
- **📋 Clear Output**: Displays the frequency of each digit that appears at least once.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures that the input number is positive.
   - **`int Count_Digit_Frequency(int N, short Digit_To_Check)`**: Counts how many times the specified digit appears in the given number.
   - **`void Print_All_Digit_Frequency(int N)`**: Calls `Count_Digit_Frequency` for each digit (0-9) and prints the frequencies of digits that appear at least once.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, retrieves the user input for the number, and calls `Print_All_Digit_Frequency()` to compute and display the digit frequencies.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user to enter a positive integer. It validates input to ensure that it is positive.

- **`int Count_Digit_Frequency(int N, short Digit_To_Check)`**
  - This function loops through each digit of the number:
    - Extracts the last digit using the modulus operator (`%`).
    - Removes the last digit by dividing the number by 10.
    - Increments the frequency count if the extracted digit matches `Digit_To_Check`.

- **`void Print_All_Digit_Frequency(int N)`**
  - Iterates through digits 0 to 9, calling `Count_Digit_Frequency` for each digit, and prints the frequency of digits that have a count greater than 0.

- **`int main()`**
  - The entry point of the program where it retrieves the user input and calls the function to print digit frequencies.

---

## ▶️ Execution Example

```plaintext
Please Enter The Main Number : 123453123


Digit 1 Frequency is 2 Time(s).
Digit 2 Frequency is 2 Time(s).
Digit 3 Frequency is 3 Time(s).
Digit 4 Frequency is 1 Time(s).
Digit 5 Frequency is 1 Time(s).

