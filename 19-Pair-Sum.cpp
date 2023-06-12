/*
Link: https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<int>> pairSum(vector<int> &arr, int s)
    {
        vector<vector<int>> ans;
        unordered_map<int, int> hash;
        for (auto x : arr)
        {
            if (hash.count(s - x))
            {
                int val = hash[s - x];
                while (val--)
                    ans.push_back({min(x, s - x), max(x, s - x)});
            }
            hash[x]++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
}