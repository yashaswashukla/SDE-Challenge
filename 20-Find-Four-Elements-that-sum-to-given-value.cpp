/*
Link:https://www.codingninjas.com/studio/problems/find-four-elements-that-sums-to-a-given-value_8230785?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{

    string fourSum(vector<int> arr, int target, int n)
    {
        sort(arr.begin(), arr.end());
        unordered_map<int, pair<int, int>> hash;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (hash.find(arr[i] + arr[j]) == hash.end())
                    hash[arr[i] + arr[j]] = {i, j};

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = target - arr[i] - arr[j];
                if (hash.find(sum) != hash.end())
                {
                    int v1 = hash[sum].first, v2 = hash[sum].second;
                    if (v1 != i and v2 != j and v2 != i and v1 != j)
                        return "Yes";
                }
            }
        }
        return "No";
    }
};
int main()
{
}