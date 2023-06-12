/*
Link: https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
    {
        unordered_set<int> hash;
        for (auto x : arr)
            hash.insert(x);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!hash.count(arr[i] - 1))
            {
                int count = 0;
                int num = arr[i];
                while (hash.count(num))
                {
                    count++;
                    num++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};
int main()
{
}