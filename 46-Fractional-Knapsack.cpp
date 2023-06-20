/*
Link:https://www.codingninjas.com/studio/problems/fractional-knapsack_8230767?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool comp(pair<int, int> &a, pair<int, int> &b)
    {
        return (double)a.second / a.first > (double)b.second / b.first;
    }
    double maximumValue(vector<pair<int, int>> &items, int n, int w)
    {
        sort(items.begin(), items.end(), comp);
        double profit = 0;
        int i = 0;
        while (w > 0)
        {
            if (items[i].first <= w)
            {
                w -= items[i].first;
                profit += items[i].second;
            }
            else
            {
                profit += ((double)items[i].second / items[i].first) * (double)w;
                w = 0;
            }
            i++;
        }
        return profit;
    }
};
int main()
{
}