# 🧩 Sudoku Solver in C++

This project is a command-line Sudoku Solver written in **C++** using the **Backtracking Algorithm**. The solver fills a 9x9 Sudoku grid by recursively trying digits 1–9 in empty cells while maintaining the puzzle's constraints.

---

## 📌 Problem Statement

> "I implemented a Sudoku Solver using the backtracking algorithm. The program fills an incomplete 9x9 grid by recursively placing digits from 1 to 9 while following all Sudoku constraints: unique values in each row, column, and 3x3 subgrid."

---

## 💡 Key Concepts

### 🔧 DSA Concepts Used:
- Backtracking  
- Recursion  
- 2D Arrays  
- Constraint Checking  

### 📊 Time & Space Complexity:
- **Time Complexity (Worst Case):** `O(9^n)` where `n = number of empty cells`.
- **Space Complexity:** `O(1)` (excluding recursion stack) or `O(n)` (including recursion stack).

---

## 🚀 Why It’s an Impressive Project

✅ Solves a constraint satisfaction problem  
✅ Showcases recursive problem solving  
✅ Demonstrates pruning invalid states with backtracking  
✅ Can be extended to include GUI, difficulty analysis, puzzle generation, etc.

---

## ❓ Sample Interview Q&A

**Q: How does backtracking work in Sudoku?**  
A: It fills empty cells one by one. For each cell, it tries digits 1–9, checks if valid using `isSafe()`, fills it, and recurses. If stuck, it undoes the move (backtracks).

**Q: What’s the base condition for your recursive function?**  
A: When no empty cell is left — the puzzle is solved.

**Q: How do you ensure the number placed is valid?**  
A: The `isSafe()` function checks:
- Row constraint
- Column constraint
- 3x3 subgrid constraint

**Q: Can it be optimized?**  
A: Yes. Possible improvements:
- Use `bitsets` or hash sets for constant-time checks  
- Apply **Knuth’s Algorithm X** (Dancing Links)  
- Add input validation and constraint propagation

---

## 📋 Sample Run

### ▶️ Input:
```
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
```

### ✅ Output:
```
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
```

If the puzzle is unsolvable:
```
No solution exists for the given Sudoku.
```

---

## 🧠 Core Code Logic

```cpp
bool Backtracking(int M[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (M[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isSafe(M, row, col, num)) {
                        M[row][col] = num;
                        if (Backtracking(M))
                            return true;
                        M[row][col] = 0;
                    }
                }
                return false; // no valid number found
            }
        }
    }
    return true; // no empty cells
}
```

---

## 💥 Bonus (for extra interview credit)

- Add GUI using Python (Tkinter) or C++ Qt.
- Add puzzle difficulty estimator (based on number of clues).
- Add auto-generator with a random valid puzzle.
- Add solver speed benchmark using high-constraint inputs.
- Add a visual step-by-step solver (good for interviews/presentations).

---

## 🏁 Final Thoughts

This project not only showcases your understanding of recursion and backtracking but also demonstrates your ability to build scalable, modular logic — key skills interviewers look for in software engineers.

---

## 🧑‍💻 Author

Made with 💻 and 💡 by [Shreesh Jugade](https://github.com/SHREESH-git)

