# 🧩 Sudoku Solver (C++ | Backtracking Algorithm)

This project implements a Sudoku Solver in C++ using the **backtracking algorithm**. It allows you to input a 9x9 Sudoku puzzle and solves it by applying recursive constraint satisfaction techniques.

---

## 📌 Features

- Solves standard 9x9 Sudoku puzzles
- Uses backtracking for recursive cell filling
- Validates constraints for row, column, and 3x3 grid
- Takes user input via console
- Simple, clean, and efficient code structure

---

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Recursion, Backtracking, 2D Arrays, Constraint Checking

---

## 🚀 How It Works

1. The solver searches for the next empty cell.
2. It tries placing digits 1–9 in the cell.
3. For each number, it checks if it is safe using the `isSafe()` function:
   - Not in the same row
   - Not in the same column
   - Not in the same 3x3 box
4. If the number is safe, it places it and recursively proceeds to the next cell.
5. If stuck, it backtracks and tries a different number.

---

## 📋 Input Format

- Input is taken through the console.
- Enter `0` for empty cells.
- You'll be prompted to enter the value for each cell in the 9x9 grid.

---

## 📋 Sample Run
When you run the program, it will prompt you to enter the Sudoku puzzle row by row. Use 0 for empty cells.

▶️ Sample Input:
Enter the Sudoku row-wise, using 0 for empty cells:
Enter 9 values for row 1: 5 3 0 0 7 0 0 0 0
Enter 9 values for row 2: 6 0 0 1 9 5 0 0 0
Enter 9 values for row 3: 0 9 8 0 0 0 0 6 0
Enter 9 values for row 4: 8 0 0 0 6 0 0 0 3
Enter 9 values for row 5: 4 0 0 8 0 3 0 0 1
Enter 9 values for row 6: 7 0 0 0 2 0 0 0 6
Enter 9 values for row 7: 0 6 0 0 0 0 2 8 0
Enter 9 values for row 8: 0 0 0 4 1 9 0 0 5
Enter 9 values for row 9: 0 0 0 0 8 0 0 7 9

✅ Output:
Sudoku solved successfully:
5 3 4 | 6 7 8 | 9 1 2 
6 7 2 | 1 9 5 | 3 4 8 
1 9 8 | 3 4 2 | 5 6 7 
------+-------+------
8 5 9 | 7 6 1 | 4 2 3 
4 2 6 | 8 5 3 | 7 9 1 
7 1 3 | 9 2 4 | 8 5 6 
------+-------+------
9 6 1 | 5 3 7 | 2 8 4 
2 8 7 | 4 1 9 | 6 3 5 
3 4 5 | 2 8 6 | 1 7 9 

If the puzzle is unsolvable, the output will be:
No solution exists for the given Sudoku.

## 🧠 Time and Space Complexity

- **Time Complexity (Worst Case):** `O(9^n)` where `n` is the number of empty cells.
- **Space Complexity:** `O(1)` (excluding recursion stack), or `O(n)` with call stack.

---

## 📁 Files

| File          | Description                            |
|---------------|----------------------------------------|
| `main.cpp`    | Core implementation of the Sudoku solver |
| `README.md`   | Project documentation (you’re here)     |

---

## 💡 Possible Enhancements

- Add a GUI using Qt, SFML, or ImGui.
- Add difficulty detection logic.
- Allow input from a text file or command-line argument.
- Convert to a web-based app using WebAssembly.

---

## 🗣 Sample Interview Questions

- How does your backtracking logic work?
- How do you validate a Sudoku number placement?
- Can you optimize the algorithm further?
- How would you build a GUI for this in C++?

---

## 📜 License

This project is licensed under the MIT License.

---

## 👨‍💻 Author

Made with ❤️ by Shreesh Jugade  
🔗 [GitHub Profile](https://github.com/SHREESH-git)  
📫 Feel free to fork, use, and contribute!
