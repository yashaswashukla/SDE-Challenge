/*
Link:https://www.codingninjas.com/codestudio/problems/maximum-consecutive-ones_8230736?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int longestSubSeg(vector<int> &arr, int n, int k)
    {
        int i = 0, j = 0, ans = 0, flips = 0;
        while (j < n)
        {
            if (!arr[j])
                flips++;
            while (flips > k)
                if (!arr[i++])
                    flips--;

            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
int main()
{
}