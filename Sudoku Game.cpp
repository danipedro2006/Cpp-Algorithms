#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

#define empthy 0;
#define N 9;

int grid[9][9];

bool isGridSafe(int grid[9][9], int row, int col, int num);

bool isGridEmpthy(int grid[9][9], int& row, int& col);

bool solve(int grid[9][9]) {
    int row, col;
    if (!isGridEmpthy(grid, row, col))
        return true;
    for (int num = 1; num <=9; num++) {
        if (isGridSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solve(grid))
                return true;
            grid[row][col] = empthy;
        }
    }
    return false;
}

void printBoard(int grid[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
};


bool usedInCol(int grid[9][9], int pcol, int num) {

    for (int row = 0; row < 9; row++) {
        if (grid[row][pcol] == num) {
            //cout << grid[row][pcol];
            return true;
            }
        }
    return false;
    };



bool usedInRow(int grid[9][9], int prow, int num) {

    for (int col = 0; col < 9; col++) {
        if (grid[prow][col] == num) {
            return true;
        }
    }
    return false;
};

bool usedInBox(int grid[9][9], int browstart, int bcolstart, int num)
{
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (grid[row + browstart][col + bcolstart] == num) {
                return true;
            }
        }
    }
    return false;
};
    
bool isGridSafe(int grid[9][9],int prow, int pcol, int num) {
    return (!usedInRow(grid, prow, num) && !usedInCol(grid, pcol, num) && !usedInBox(grid, prow - prow % 3, pcol - pcol % 3, num));
}

bool isGridEmpthy(int grid[9][9], int& row, int& col) {
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (grid[row][col] == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    int grid[9][9]= {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,1,2,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,7,0,0,0,0},
        {0,0,3,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,3},
        {0,0,0,0,0,0,0,0,9}
    };

    printBoard(grid);
    //cout<<usedInCol(grid, 3, 5);
    //cout << usedInBox(grid, 0, 0, 6);
   //std::cout << "Hello World!\n";

    if (solve(grid) == true)
        printBoard(grid);
    else
        cout << "No solution found<<endl";
        return 0;
};
