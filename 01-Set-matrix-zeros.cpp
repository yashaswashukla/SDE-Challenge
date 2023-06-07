/*
Link: https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{

    void setZeros(vector<vector<int>> &matrix)
    {
        // Write your code here.
        int col0 = 0;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (!matrix[i][j])
                {
                    matrix[i][0] = 0;
                    if (!j)
                        col0 = 1;
                    else
                        matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < matrix.size(); i++)
            for (int j = 1; j < matrix[0].size(); j++)
                if (matrix[i][j])
                    if (!matrix[i][0] or !matrix[0][j])
                        matrix[i][j] = 0;

        if (!matrix[0][0])
            for (int j = 0; j < matrix[0].size(); j++)
                matrix[0][j] = 0;
        if (col0)
            for (int i = 0; i < matrix.size(); i++)
                matrix[i][0] = 0;
    }
};
int main()
{
}