# 📜 Problem 16: Three-Letter Combination Generator

> **A C++ program that generates and prints all possible combinations of three uppercase letters.**

## 📦 Project Overview
This program generates all combinations of three uppercase letters (A-Z) and prints them to the console. It uses nested loops to iterate through each letter position, constructing and displaying the combinations.

---

## 🌟 Features
- **🔠 Combination Generation**: Generates every possible three-letter combination of uppercase English letters.
- **📋 Structured Output**: Clearly formats the output, separating different sections for better readability.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`void Print_AllWords()`**: This function generates and prints the three-letter combinations:
     - Uses three nested loops to iterate over the ASCII values of uppercase letters (65 to 90).
     - Constructs a string for each combination and resets it after printing.

2. **Execution Flow**:
   - The program begins execution in the `main()` function, which sets the console color and calls the function to print the letter combinations.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`void Print_AllWords()`**
  - This function handles the core functionality:
    - It uses three loops to create combinations of letters:
      - The outer loop iterates over the first letter.
      - The middle loop iterates over the second letter.
      - The inner loop iterates over the third letter.
    - The combination is constructed as a string, printed to the console, and then reset for the next iteration.
    - A line of dashes is printed after each set of combinations for clarity.

- **`int main()`**
  - The entry point of the program, which:
    - Sets the console color using `system("color 6F")` for a visually appealing output.
    - Calls `Print_AllWords()` to display the letter combinations.
    - Includes a pause at the end to allow the user to view the output before the console closes.

---

## ▶️ Execution Example
When you run the program, it produces output similar to this:

```plaintext
AAA
AAB
AAC
...
ZZY
ZZZ
-----------------------------------------------------
