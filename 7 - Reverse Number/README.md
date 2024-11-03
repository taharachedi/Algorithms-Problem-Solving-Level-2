# 📜 Problem 7: Reverse Number Calculator

> **A C++ program that reverses a given positive integer.**

## 📦 Project Overview
This program prompts the user to enter a positive integer and then calculates the reverse of that number, displaying the result clearly.

---

## 🌟 Features
- **🔢 User Input**: Asks the user for a positive integer.
- **🔄 Number Reversal**: Computes the reverse of the entered number.
- **📊 Clear Output**: Displays the reversed number in a user-friendly manner.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures the input number is positive.
   - **`int Reverse_Num(int N)`**: Reverses the digits of the input number.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, which retrieves the user input via `Read_Num()` and computes the reversed number using `Reverse_Num()`, displaying the result.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user to enter a positive integer. If the user enters a non-positive integer, it continues to prompt until a valid input is provided.

- **`int Reverse_Num(int N)`**
  - Uses a loop to reverse the number by:
    - Extracting the last digit using the modulus operator (`%`).
    - Removing the last digit by dividing the number by 10.
    - Constructing the new number by multiplying the current new number by 10 and adding the extracted digit.

- **`int main()`**
  - Calls the above functions to get user input and calculate the reversed number, displaying the result.

---

## ▶️ Execution Example

```plaintext
Please Enter A Number : 1234

Reverse is = 4321
