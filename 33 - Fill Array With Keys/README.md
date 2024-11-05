# 🔑 Problem 33: Random Key Generator

> **💡 Generate random, license-like keys with a customizable character type and length!**

## 📘 Project Overview
This C++ program generates random license-like keys using uppercase letters and displays them in a formatted style, such as `ABCD - EFGH - IJKL - MNOP`. Users can specify the number of keys to generate. Each key consists of four random sequences of uppercase letters separated by hyphens.

---

## 🌟 Features
- **🔡 Customizable Random Character Generation**: Generates random characters based on specified types, including:
  - Special characters
  - Digits
  - Capital letters
  - Small letters
- **🗝️ Random License-Key Style Generation**: Constructs a key with uppercase letters in a format like `XXXX - XXXX - XXXX - XXXX`.
- **📋 Array Storage and Display**: Prompts the user for the number of keys to generate, stores them in an array, and displays them.

---

## ⚙️ How It Works
### 1. Character Type and Randomization
- **`enum enCharType`**: Defines character types (Special Character, Digit, Capital Letter, Small Letter).
- **`Random_Number(int From, int To)`**: Generates a random integer within a specified range.
- **`Get_RandomCharacter(enCharType Type)`**: Generates a random character of the specified type.

### 2. Key Generation
- **`Random_Word(enCharType CharType, int length)`**: Generates a sequence of random characters based on a specified type and length.
- **`Random_Key()`**: Assembles four random sequences of uppercase letters separated by hyphens (e.g., `ABCD - EFGH - IJKL - MNOP`).

### 3. Key Array and Display
- **`Fill_Array_Keys(string arr[100], int& length)`**: Asks the user how many keys to generate, populates an array with that many keys.
- **`Print_Array(string arr[100], int length)`**: Displays the generated keys in the console.

---

## 🛠️ Code Breakdown
### 🔹 Key Components
- **Character Generation (`Get_RandomCharacter`)**: Returns a random character from a given character type (e.g., capital letter).
- **Random Key Formation**: `Random_Key` assembles a key by concatenating four sequences of random uppercase letters.
- **Array Operations**: Stores keys in an array and displays them based on user input.

### Sample Execution Flow
- User specifies how many keys to generate.
- Program generates the keys, storing each in the array.
- The array of keys is then printed to the console.

---

## ▶️ Sample Execution
Running the program produces output similar to this:

```plaintext
How Many Keys?
5

Array Elements:
Array [ 1 ] : ABCD - EFGH - IJKL - MNOP
Array [ 2 ] : QWET - YUIO - ASDF - GHJK
Array [ 3 ] : ZXCV - BNML - QWER - TYUI
Array [ 4 ] : ASDF - GHJK - LQWE - RTYU
Array [ 5 ] : MNBV - CXZX - OPQR - STUV
