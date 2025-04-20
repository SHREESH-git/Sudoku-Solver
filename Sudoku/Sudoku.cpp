#include<iostream>
using namespace std;

bool isSafe(int M[9][9], int row, int col, int num) {
    for (int x = 0; x < 9; x++) {
        if (M[row][x] == num || M[x][col] == num)
            return false;
    }
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (M[i + startRow][j + startCol] == num)
                return false;
        }
    }
    return true;
}

bool Backtracking(int M[9][9]) {
    int row, col;
    bool emptyFound = false;
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (M[row][col] == 0) {
                emptyFound = true;
                break;
            }
        }
        if (emptyFound)
            break;
    }
    if (!emptyFound)
        return true; 

    for (int num = 1; num <= 9; num++) {
        if (isSafe(M, row, col, num)) {
            M[row][col] = num;
            if (Backtracking(M))
                return true;
            M[row][col] = 0; 
        }
    }
    return false;
}

void printMatrix(int M[9][9]) {
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0 && i != 0)
            cout << "------+-------+------\n";
        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0 && j != 0)
                cout << "| ";
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int Matrix[9][9];
    int i,j;
    cout << "Enter the Sudoku row-wise, using 0 for empty cells:\n";
    for (i = 0; i < 9; i++) {
        cout << "Enter 9 values for row " << i + 1 << ": ";
        for (j = 0; j < 9; j++) {
            cin >> Matrix[i][j];
            if (Matrix[i][j] < 0 || Matrix[i][j] > 9) {
                cout << "Invalid input! Please enter a number between 0 and 9." << endl;
                j--; 
            }
        }
    }


    if (Backtracking(Matrix)) {
        cout << "Sudoku solved successfully:" << endl;
        printMatrix(Matrix);
    } else {
        cout << "No solution exists for the given Sudoku." << endl;
    }

    return 0;
}
