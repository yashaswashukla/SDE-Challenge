/*
Link:https://www.codingninjas.com/codestudio/problems/minimum-number-of-platforms_8230720?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int calculateMinPatforms(int at[], int dt[], int n)
    {
        sort(at, at + n);
        sort(dt, dt + n);

        int i = 0, j = 1, plat = 1, ans = 1;
        while (j < n)
        {
            if (at[j] <= dt[i])
            {
                plat++;
                i++;
            }
            else if (at[j] > dt[i])
            {
                plat--;
                j++;
            }

            ans = max(ans, plat);
        }
        return ans;
    }
};
int main()
{
}