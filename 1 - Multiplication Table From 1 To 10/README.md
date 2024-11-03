# 📊 Problem 1: Multiplication Table Generator

> **A simple C++ program that displays a multiplication table from 1 to 10. The program formats the output with a header and organizes the table in a clear layout.**

## 🌟 Project Overview
This program generates a multiplication table for numbers 1 through 10. It includes a well-structured header and visually separates the rows with vertical bars for better readability.

---

## 📦 Features
- **🧮 Multiplication Table**: Displays the multiplication results for numbers 1 to 10.
- **📊 Clear Formatting**: Includes a table header and vertical bars to separate the multiplication factors, enhancing the visual structure of the output.
- **🎨 Color Coding**: Utilizes console color coding to improve the aesthetics of the output.

---

## ⚙️ How It Works
1. **Function Definitions**:
   - **`TableHeader()`**: Prints the header for the multiplication table and the numbers 1 to 10 as column headers.
   - **`VerticalBar(int i)`**: Returns a formatted vertical bar string to ensure proper alignment based on the number size (single or double digits).
   - **`PrintMultiplicationTable()`**: Orchestrates the entire table display process, calls the header function, and iterates through the numbers to generate multiplication results.

2. **Execution Flow**:
   - The program starts execution in the `main()` function, which calls `PrintMultiplicationTable()`.
   - The multiplication results are computed and displayed in a structured format.

---

## 🛠️ Code Breakdown
### 🔹 Main Functions
- **`void TableHeader()`**
  - Displays the multiplication table header, showing the factors from 1 to 10.

- **`string VerticalBar(int i)`**
  - Returns the appropriate spacing for the vertical bar based on the value of `i`.

- **`void PrintMultiplicationTable()`**
  - Displays the entire multiplication table using nested loops for calculation and formatting.

- **`int main()`**
  - Initializes the program and calls the function to print the multiplication table.

---

## ▶️ Execution Example

```plaintext
Multiplication Table From 1 To 10

                 1      2      3      4      5      6      7      8      9      10
____________________________________________________________________________________
 1   |  1	2	3	4	5	6	7	8	9	10
 2   |  2	4	6	8	10	12	14	16	18	20
 3   |  3	6	9	12	15	18	21	24	27	30
 4   |  4	8	12	16	20	24	28	32	36	40
 5   |  5	10	15	20	25	30	35	40	45	50
 6   |  6	12	18	24	30	36	42	48	54	60
 7   |  7	14	21	28	35	42	49	56	63	70
 8   |  8	16	24	32	40	48	56	64	72	80
 9   |  9	18	27	36	45	54	63	72	81	90
10   | 10	20	30	40	50	60	70	80	90	100
