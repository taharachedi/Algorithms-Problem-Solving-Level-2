# 🔑 Problem 21: Key Generator

> **A C++ program to generate unique keys composed of random capital letters.**

## 📦 Project Overview
This program generates a specified number of unique keys formatted as four groups of four capital letters, separated by hyphens. It employs random character generation to create keys based on user input.

---

## 🌟 Features
- **🛠️ Custom Key Format**: Generates keys in the format `XXXX-XXXX-XXXX-XXXX`, where `X` is a capital letter.
- **🔢 User-defined Quantity**: Allows users to specify the number of keys they wish to generate.
- **🎲 Randomization**: Uses random number generation to ensure unique keys on each execution.
- **🔄 Input Validation**: Ensures the user inputs a positive integer for the number of keys.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`int Random_Number(int From, int To)`**: Generates a random integer within the specified range `[From, To]`.
   - **`char Get_Random_Character(enCharType CharType)`**: Returns a random character based on the specified character type. For this program, it generates capital letters only.
   - **`int Read_Number(string Msg)`**: Prompts the user for input until a valid positive integer is entered.
   - **`string Get_4_Characters(enCharType CharType, short length)`**: Constructs a string of random characters based on the specified length and character type.
   - **`string GenerateKey()`**: Generates a complete key following the defined format using groups of four characters.
   - **`void GenerateKeys(short NumberOfKeys)`**: Generates and prints the specified number of keys.

2. **Execution Flow**:
   - The program begins in the `main()` function:
     - Sets the console color for better aesthetics.
     - Seeds the random number generator.
     - Prompts the user for the number of keys to generate and calls the `GenerateKeys()` function.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`int Random_Number(int From, int To)`**
  - Generates a random integer in the range `[From, To]` using the formula: 
    ```cpp
    return rand() % (To - From + 1) + From;
    ```

- **`char Get_Random_Character(enCharType CharType)`**
  - Returns a random capital letter by generating a number between ASCII values 65 (A) and 90 (Z).

- **`int Read_Number(string Msg)`**
  - Prompts the user for input and validates it to ensure a positive integer is entered.

- **`string Get_4_Characters(enCharType CharType, short length)`**
  - Constructs a string of random characters of a specified length, using the `Get_Random_Character()` function.

- **`string GenerateKey()`**
  - Generates a key formatted as `XXXX-XXXX-XXXX-XXXX`, concatenating four groups of four characters.

- **`void GenerateKeys(short NumberOfKeys)`**
  - Iteratively generates and prints the specified number of keys.

---

## ▶️ Execution Example
When you run the program, the console output may look something like this:

```plaintext
How Many Keys To Generate ? 
5
Key [1] : ABCD-EFGH-IJKL-MNOP
Key [2] : QRST-UVWX-YZAB-CDEF
Key [3] : GHIJ-KLMN-OPQR-STUV
Key [4] : WXYZ-QRST-ABCD-EFGH
Key [5] : IJKL-MNOP-QRST-UVWX
