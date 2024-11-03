# 🎲 Problem 20: Random Character Generator

> **A C++ program that generates random characters based on specified types.**

## 📦 Project Overview
This program demonstrates the generation of random characters categorized by type, such as special characters, digits, capital letters, and small letters. The program uses enums to define character types and generates random characters accordingly.

---

## 🌟 Features
- **🎭 Random Character Types**: Generates random characters based on user-defined types:
  - Special Characters
  - Digits
  - Capital Letters
  - Small Letters
- **🔄 Random Seed Initialization**: Uses a time-based seed to ensure different character sequences in each run.
- **🖨️ Output Display**: Displays the generated random characters on the console.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Read_Random(int From, int To)`**: This function generates a random integer between `From` and `To` values, ensuring the character falls within a valid ASCII range.
   - **`char Get_RandomCharacter(enCharType CharType)`**: Returns a random character based on the specified `CharType` using a switch-case statement.

2. **Execution Flow**:
   - The program begins in the `main()` function:
     - Seeds the random number generator using `srand((unsigned)time(NULL))` to ensure different results on each execution.
     - Calls `Get_RandomCharacter()` for each character type and prints the generated character to the console.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Read_Random(int From, int To)`**
  - Generates a random integer within the specified range:
    - The formula used: `rand() % (To - From + 1) + From`.
  
- **`char Get_RandomCharacter(enCharType CharType)`**
  - Uses a switch statement to return a random character based on the specified type:
    - **Special Character**: ASCII range 33 to 47
    - **Digit**: ASCII range 48 to 57
    - **Capital Letter**: ASCII range 65 to 90
    - **Small Letter**: ASCII range 97 to 122

- **`int main()`**
  - The entry point of the program:
    - Seeds the random number generator.
    - Calls the `Get_RandomCharacter` function for each character type to display random characters.

---

## ▶️ Execution Example
When you run the program, the output may look like this:

```plaintext
$ // (Special Character)
5 // (Digit)
A // (Capital Letter)
x // (Small Letter)
