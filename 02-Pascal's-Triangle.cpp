/*
Link:https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<long long int>> printPascal(int n)
    {
        // Write your code here.
        if (!n)
        
            return {};
        vector<vector<long long int>> ans;
        ans.push_back({1});

        for (int i = 1; i < n; i++)
        {
            vector<long long int> temp;
            temp.push_back(1);
            for (int j = 0; j < ans[i - 1].size() - 1; j++)
                temp.push_back(ans[i - 1][j] + ans[i - 1][j + 1]);
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};
int main()
{
}