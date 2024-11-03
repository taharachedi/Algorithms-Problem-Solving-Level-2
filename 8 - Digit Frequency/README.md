# 📜 Problem 8: Digit Frequency Counter

> **A C++ program that counts the frequency of a specified digit in a given positive integer.**

## 📦 Project Overview
This program prompts the user to enter a positive integer and a digit to check, then calculates how many times that digit appears in the entered number, displaying the result clearly.

---

## 🌟 Features
- **🔢 User Input**: Asks the user for a positive integer and a digit to check.
- **📊 Frequency Calculation**: Computes how many times the specified digit appears in the number.
- **📋 Clear Output**: Displays the frequency in a user-friendly manner.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures the input number is positive.
   - **`int Count_Digit_Frequency(int N, short DigitToCheck)`**: Counts how many times the specified digit appears in the given number.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, which retrieves the user input for the number and the digit to check. It then computes the digit frequency using `Count_Digit_Frequency()` and displays the result.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user to enter a positive integer. If the user enters a non-positive integer, it continues to prompt until a valid input is provided.

- **`int Count_Digit_Frequency(int N, short DigitToCheck)`**
  - Uses a loop to check each digit of the number:
    - Extracts the last digit using the modulus operator (`%`).
    - Removes the last digit by dividing the number by 10.
    - Increments the frequency count if the extracted digit matches `DigitToCheck`.

- **`int main()`**
  - Calls the above functions to get user input and calculate the frequency of the specified digit, displaying the result.

---

## ▶️ Execution Example

```plaintext
Please Enter The Main Number : 123453123

Please Enter The Digit To Check : 3

Digit  3 Frequency is  3 Time(s).
