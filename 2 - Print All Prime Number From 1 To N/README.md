# 🌟 Problem 2: Prime Number Checker

> **A C++ program that identifies and displays all prime numbers from 1 to a user-defined upper limit \( N \).**

## 📦 Project Overview
This program allows users to enter an upper limit \( N \), and it calculates and displays all the prime numbers from 1 to \( N \). Prime numbers are defined as natural numbers greater than 1 that cannot be formed by multiplying two smaller natural numbers.

---

## 🌟 Features
- **🔢 User Input**: Prompts the user to enter an upper limit \( N \).
- **🧮 Prime Checking**: Checks each number from 1 to \( N \) to determine if it is prime.
- **📊 Clear Output**: Displays all identified prime numbers in a clear and formatted manner.
- **🛠️ Enum Usage**: Utilizes an enumeration for better readability and code organization.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_N(string Msg)`**: Prompts the user for input and validates that the number is non-negative.
   - **`enPrimeNotPrime CheckPrime(int Num)`**: Checks if a given number is prime by testing divisibility from 2 to \( \frac{Num}{2} \).
   - **`void PrintPrime(int N)`**: Iterates through numbers from 1 to \( N \) and prints those that are prime.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, which calls `Read_N()` to get the upper limit and then calls `PrintPrime()` to display the prime numbers.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_N(string Msg)`**
  - Asks the user to enter a number and checks for non-negative input.

- **`enPrimeNotPrime CheckPrime(int Num)`**
  - Uses a loop to check if `Num` has any divisors other than 1 and itself. If a divisor is found, it returns `NotPrime`; otherwise, it returns `Prime`.

- **`void PrintPrime(int N)`**
  - Loops through numbers from 1 to \( N \) and calls `CheckPrime()` for each. If a number is prime, it prints the number.

- **`int main()`**
  - Calls the necessary functions to read user input and print the prime numbers.

---

## ▶️ Execution Example

```plaintext
Please Enter The Last Number N : 20

The Prime Number From 1 To 20 : 
2
3
5
7
11
13
17
19
