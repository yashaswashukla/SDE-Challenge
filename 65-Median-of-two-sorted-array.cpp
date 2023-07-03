/*
Link:https://www.codingninjas.com/studio/problems/median-of-two-sorted-arrays_8230788?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k)
    {

        if (m < n)
            return ninjaAndLadoos(row2, row1, n, m, k);
        int low = max(0, k - n), high = min(m, k);
        while (low <= high)
        {
            int cut1 = (low + high) / 2;
            int cut2 = k - cut1;

            int l1 = (!cut1) ? INT_MIN : row1[cut1 - 1];
            int l2 = (!cut2) ? INT_MIN : row2[cut2 - 1];
            int r1 = (cut1 == m) ? INT_MAX : row1[cut1];
            int r2 = (cut2 == n) ? INT_MAX : row2[cut2];
            if (l1 > r2)
                high = cut1 - 1;
            else if (l2 > r1)
                low = cut1 + 1;
            else if (l1 <= r2 and l2 <= r1)
                return max(l1, l2);
        }
        return -1;
    }
};
int main()
{
}