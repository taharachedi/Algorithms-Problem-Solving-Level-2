# 📊 Problem 11: Palindrome Checker

> **A C++ program that checks if a given positive integer is a palindrome.**

## 📦 Project Overview
This program prompts the user to input a positive integer and determines whether that number reads the same forwards and backwards, thus identifying it as a palindrome.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter a positive integer.
- **🔄 Palindrome Check**: Reverses the number and checks if it is the same as the original.
- **📋 Clear Output**: Informs the user whether the number is a palindrome.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Num(string Msg)`**: Prompts the user for input and ensures that the input number is positive.
   - **`int Reverse_Num(int N)`**: Reverses the digits of the given number.
   - **`bool isPalindrome(int N)`**: Checks if the given number is equal to its reversed form.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, retrieves the user input for the number, and calls `isPalindrome()` to check if the number is a palindrome. The result is then displayed to the user.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Num(string Msg)`**
  - Prompts the user to enter a positive integer and validates the input to ensure that it is positive.

- **`int Reverse_Num(int N)`**
  - This function reverses the digits of the number:
    - Extracts the last digit using the modulus operator (`%`).
    - Removes the last digit by dividing the number by 10.
    - Constructs the reversed number by multiplying the new number by 10 and adding the extracted digit.

- **`bool isPalindrome(int N)`**
  - Checks if the original number is equal to its reversed number, indicating whether it is a palindrome.

- **`int main()`**
  - The entry point of the program where it retrieves the user input, checks if it's a palindrome, and outputs the result.

---

## ▶️ Execution Example

```plaintext
Please Enter A Positive Number : 12321
Yes, it's A Palindrome Number (t9rah mn limen = mn liser)
