/*
Link: https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    long long maxSubarraySum(int arr[], int n)
    {
        long long ans = 0, cursum = 0;
        for (int i = 0; i < n; i++)
        {
            cursum += arr[i];
            ans = max(cursum, ans);
            if (cursum < 0)
                cursum = 0;
        }
        return ans;
    }
};
int main()
{
}