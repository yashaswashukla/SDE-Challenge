/*
Link:https://www.codingninjas.com/studio/problems/rat-in-a-maze-all-paths_8230705?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int row[4] = {1, -1, 0, 0};
    int col[4] = {0, 0, 1, -1};
    vector<vector<int>> ans;
    void dfs(int i, int j, vector<vector<int>> &maze, vector<vector<int>> &vis, vector<int> move)
    {
        int n = maze.size();
        if (i == n - 1 and j == n - 1)
        {
            ans.push_back(move);
            return;
        }
        vis[i][j] = 1;
        for (int k = 0; k < 4; k++)
        {
            int nrow = i + row[k], ncol = j + col[k];
            if (nrow >= 0 and ncol >= 0 and nrow < n and ncol < n and !vis[nrow][ncol] and maze[nrow][ncol])
            {
                move[nrow * n + ncol] = 1;
                dfs(nrow, ncol, maze, vis, move);
                move[nrow * n + ncol] = 0;
            }
        }
        vis[i][j] = 0;
    }
    vector<vector<int>> ratInAMaze(vector<vector<int>> &maze, int n)
    {
        if (!maze[0][0] and !maze[n - 1][n - 1])
            return {};
        vector<int> move(n * n, 0);
        move[0] = 1;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        dfs(0, 0, maze, vis, move);
        return ans;
    }
};
int main()
{
}