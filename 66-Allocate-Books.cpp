/*
Link:https://www.codingninjas.com/studio/problems/allocate-books_8230810?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool valid(int days, vector<int> &time, long long maxtime)
    {
        long long sum = 0, totalday = 1;
        for (auto x : time)
        {
            sum += x;
            if (sum > maxtime)
            {
                totalday++;
                sum = x;
            }
        }
        return totalday <= days;
    }
    long long ayushGivesNinjatest(int n, int m, vector<int> time)
    {
        long long low = *max_element(time.begin(), time.end()), high = 0;
        for (auto x : time)
            high += x;
        while (low < high)
        {
            long long mid = low + (high - low) / 2;
            if (valid(n, time, mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
int main()
{
}