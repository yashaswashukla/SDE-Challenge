/*
Link:https://www.codingninjas.com/studio/problems/return-subsets-sum-to-k_8230706?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void helper(vector<int> &arr, int idx, int k, vector<vector<int>> &ans, vector<int> &temp, int sum)
    {
        if (sum == k)
            ans.push_back(temp);
        for (int i = idx; i < arr.size(); i++)
        {
            temp.push_back(arr[i]);
            sum += arr[i];
            helper(arr, i + 1, k, ans, temp, sum);
            sum -= arr[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        helper(arr, 0, k, ans, temp, sum);
        return ans;
    }
};
int main()
{
}