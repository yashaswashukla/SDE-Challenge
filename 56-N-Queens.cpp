/*
Link:https://www.codingninjas.com/studio/problems/n-queens_8230707?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool safe(int row, int col, vector<int> &board, int n)
    {
        int duprow = row, dupcol = col;

        // Upper diagonal
        while (duprow >= 0 and dupcol >= 0)
        {
            if (board[duprow * n + dupcol])
                return false;
            duprow--, dupcol--;
        }

        // Left Side
        duprow = row, dupcol = col;
        while (dupcol >= 0)
        {
            if (board[duprow * n + dupcol])
                return false;
            dupcol--;
        }

        // Lower Diagonal
        duprow = row, dupcol = col;
        while (duprow < n and dupcol >= 0)
        {
            if (board[duprow * n + dupcol])
                return false;
            duprow++, dupcol--;
        }
        return true;
    }
    void solve(int col, vector<int> &board, vector<vector<int>> &ans, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (safe(row, col, board, n))
            {
                int idx = row * n + col;
                board[idx] = 1;
                solve(col + 1, board, ans, n);
                board[idx] = 0;
            }
        }
    }
    vector<vector<int>> solveNQueens(int n)
    {
        vector<vector<int>> ans;
        vector<int> board(n * n, 0);

        solve(0, board, ans, n);
        return ans;
    }
};
int main()
{
}