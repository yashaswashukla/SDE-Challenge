/*
Link:https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class recSolution
{
    int solve(int m, int n)
    {
        if (!m and !n)
            return 0;
        if (!m or !n)
            return 1;
        return solve(m - 1, n) + solve(m, n - 1);
    }
    int uniquePaths(int m, int n)
    {
        if (m == 1 and n == 1)
            return 1;
        return solve(m - 1, n - 1);
    }
};
class tabSolution
{
    int uniquePaths(int m, int n)
    {
        if (m == 1 and n == 1)
            return 1;
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int i = 0; i < n; i++)
            dp[0][i] = 1;
        for (int i = 0; i < m; i++)
            dp[i][0] = 1;

        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                dp[i][j] = dp[i - 1][j] + dp[j - 1][i];

        return dp[m - 1][n - 1];
    }
};
int main()
{
}