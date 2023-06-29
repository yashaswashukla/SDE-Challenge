/*
Link:https://www.codingninjas.com/studio/problems/valid-sudoku_8230704?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool valid(int row, int col, int matrix[9][9], int num)
    {
        for (int i = 0; i < 9; i++)
        {
            if (matrix[i][col] == num)
                return false;
            if (matrix[row][i] == num)
                return false;
        }
        int startrow = (row / 3) * 3, startcol = (col / 3) * 3;

        for (int i = startrow; i < startrow + 3; i++)
            for(int j = startcol; j < startcol + 3; j++)
                if(matrix[i][j] == num)
                    return false;
        return true;
    }
    bool isItSudoku(int matrix[9][9])
    {
        for (int row = 0; row < 9; row++)
            for (int col = 0; col < 9; col++)
                if (!matrix[row][col])
                {
                    for (int num = 1; num <= 9; num++)
                    {
                        if (valid(row, col, matrix, num))
                        {
                            matrix[row][col] = num;
                            if (isItSudoku(matrix))
                                return true;
                            matrix[row][col] = 0;
                        }
                    }
                    return false;
                }
        return true;
    }
};
int main()
{
}