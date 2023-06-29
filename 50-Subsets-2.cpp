/*
Link:https://www.codingninjas.com/studio/problems/subsets-ii_8230855?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void helper(vector<int> &arr, int idx, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (temp.size())
            ans.push_back(temp);
        for (int i = idx; i < arr.size(); i++)
        {
            if (i > idx and arr[i] == arr[i - 1])
                continue;
            temp.push_back(arr[i]);
            helper(arr, i + 1, ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(arr.begin(), arr.end());
        helper(arr, 0, ans, temp);
        ans.push_back({});
        return ans;
    }
};
int main()
{
}