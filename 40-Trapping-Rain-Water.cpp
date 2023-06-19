/*
Link:https://www.codingninjas.com/codestudio/problems/trapping-rain-water_8230693?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long getTrappedWater(long *arr, int n)
    {
        if (n <= 2)
            return 0;
        vector<long > left(n, 0), right(n, 0);
        left[0] = arr[0];
        for (int i = 1; i < n; i++)
            left[i] = max(left[i - 1], arr[i]);

        right[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
            right[i] = max(right[i + 1], arr[i]);

        long  ans = 0;
        for (int i = 0; i < n; i++)
            ans += min(left[i], right[i]) - arr[i];
        return ans;
    }
};
int main()
{
}