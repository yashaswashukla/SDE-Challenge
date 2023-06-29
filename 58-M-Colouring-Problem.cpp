/*
Link:https://www.codingninjas.com/studio/problems/m-coloring-problem_8230777?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool safe(vector<vector<int>> &mat, int n, int color[], int node, int currcolor)
    {
        for (int i = 0; i < n; i++)
            if(i != node and mat[i][node] and color[i] == currcolor)
                return false;
        return true;
    }
    bool solve(vector<vector<int>> &mat, int n, int m, int color[], int node)
    {
        if (node >= n)
            return true;

        for (int i = 1; i <= m; i++)
        {
            if (safe(mat, n, color, node, i))
            {
                color[node] = i;
                if (solve(mat, n, m, color, node + 1))
                    return true;
                color[node] = 0;
            }
        }
        return false;
    }
    string graphColoring(vector<vector<int>> &mat, int m)
    {
        int n = mat.size();
        int color[n] = {0};
        if (solve(mat, n, m, color, 0))
            return "YES";
        return "NO";
    }
};
int main()
{
}