# 🔒 Problem 18: Simple Text Encryptor/Decryptor

> **A C++ program that encrypts and decrypts text using a Caesar cipher method with a defined encryption key.**

## 📦 Project Overview
This program allows users to enter a text string, encrypts it by shifting the characters using a specified encryption key, and then decrypts it back to its original state. It demonstrates basic string manipulation and character encoding in C++.

---

## 🌟 Features
- **✍️ Text Input**: Prompts the user to enter a text string for encryption.
- **🔒 Encryption Mechanism**: Encrypts the input text using a simple Caesar cipher.
- **🔓 Decryption Mechanism**: Decrypts the encrypted text back to its original form.
- **📜 Output Display**: Displays the original, encrypted, and decrypted text for the user.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`string Read_Text()`**: This function prompts the user to enter a text string:
     - Utilizes `getline` to capture the full line of input, including spaces.
   - **`string Encrypt_Text(string Text, short EncryptionKey)`**: This function encrypts the provided text:
     - Iterates through each character in the text and shifts its ASCII value by the encryption key.
   - **`string Decrypt_Text(string Text, short EncryptionKey)`**: This function decrypts the previously encrypted text:
     - Similar to encryption, but shifts characters back by the encryption key.

2. **Execution Flow**:
   - The program starts executing in the `main()` function:
     - Sets console color for visual appeal.
     - Calls `Read_Text()` to obtain the user's input text.
     - Calls `Encrypt_Text()` to encrypt the input text.
     - Calls `Decrypt_Text()` to decrypt the encrypted text.
     - Finally, it prints the original text, encrypted text, and decrypted text.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`string Read_Text()`**
  - This function captures the user input:
    - Prompts the user for a string.
    - Returns the captured text.

- **`string Encrypt_Text(string Text, short EncryptionKey)`**
  - This function implements the encryption logic:
    - Iterates through each character of the input text and shifts it according to the encryption key.

- **`string Decrypt_Text(string Text, short EncryptionKey)`**
  - This function implements the decryption logic:
    - Iterates through the encrypted text and shifts characters back to retrieve the original text.

- **`int main()`**
  - The entry point of the program:
    - Sets console color using `system("color 6F")` for a visually appealing output.
    - Calls `Read_Text()`, `Encrypt_Text()`, and `Decrypt_Text()` to run the program's main functionality.
    - Outputs the original, encrypted, and decrypted text to the console.

---

## ▶️ Execution Example
When you run the program, it produces output similar to this:

```plaintext
Please Enter Ur Text : 
Hello World

Text Before Encryption : Hello World

Text After Encryption : Jgnnq Yqtnf

Text After Decryption : Hello World
