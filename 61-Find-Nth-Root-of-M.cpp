/*
Link:https://www.codingninjas.com/studio/problems/find-nth-root-of-m_8230799?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int NthRoot(int n, int m)
    {
        int low = 1, high = m - 1;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (pow(mid, n) >= m)
                high = mid;
            else
                low = mid + 1;
        }
        return pow(low, n) == m ? low : -1;
    }
};
int main()
{
}