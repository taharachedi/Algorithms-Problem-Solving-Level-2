# 🔐 Problem 17: 3-Letter Password Guesser

> **A C++ program that generates and guesses a user-defined 3-letter password made up of uppercase letters.**

## 📦 Project Overview
This program asks the user to input a three-letter password consisting of uppercase letters. It then systematically generates all possible combinations of three uppercase letters (from 'A' to 'Z') and attempts to guess the user's password, displaying the trial number for each guess.

---

## 🌟 Features
- **🔠 Password Input**: Prompts the user for a 3-letter password, ensuring it's exactly three letters long.
- **🔍 Guessing Mechanism**: Generates and prints all possible 3-letter combinations until it finds the correct one.
- **📊 Trial Counter**: Keeps track of how many attempts have been made to guess the password.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`string Read_Letter()`**: This function prompts the user for a password:
     - It ensures the input is exactly three characters long before accepting it.
   - **`bool GuessLetterPassword(string Password)`**: This function generates combinations and attempts to guess the password:
     - Uses three nested loops to generate all combinations of three uppercase letters.
     - Compares each generated combination with the user-provided password.
     - Prints each trial number and the corresponding guess until the correct password is found.

2. **Execution Flow**:
   - The program starts executing in the `main()` function:
     - Sets console color for visual appeal.
     - Calls `Read_Letter()` to obtain the password.
     - Calls `GuessLetterPassword()` to start the guessing process.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`string Read_Letter()`**
  - This function handles password input:
    - Prompts the user to enter a 3-letter password.
    - Validates the length of the input to ensure it is exactly three letters.

- **`bool GuessLetterPassword(string Password)`**
  - This function implements the guessing logic:
    - It initializes a counter to track the number of trials.
    - Uses three nested loops to create combinations of letters:
      - The outer loop iterates over the first letter.
      - The middle loop iterates over the second letter.
      - The inner loop iterates over the third letter.
    - Compares the generated string with the user-provided password:
      - If they match, it outputs the correct password and the number of trials taken to find it.

- **`int main()`**
  - The entry point of the program:
    - Sets console color using `system("color 6F")` for a visually appealing output.
    - Calls `Read_Letter()` and `GuessLetterPassword()` to run the program's main functionality.
    - Includes a pause at the end to allow the user to read the output before the console closes.

---

## ▶️ Execution Example
When you run the program, it produces output similar to this:

```plaintext
Please Enter A 3-Letter Password (All Capital) :
ABC

Trial [ 1 ] : AAA
Trial [ 2 ] : AAB
...
Trial [ 123 ] : ABC

--------------------------------------------------
Password is : ABC
Found After 123 Trial(s).
