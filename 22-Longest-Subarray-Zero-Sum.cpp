/*
Link:https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int LongestSubsetWithZeroSum(vector<int> arr)
    {
        int ans = 0, sum = 0;
        unordered_map<int, int> hash;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (!sum)
                ans = i + 1;
            if (hash.find(sum) == hash.end())
                hash[sum] = i;
            else
                ans = max(ans, i - hash[sum]);
        }
        return ans;
    }
};
int main()
{
}