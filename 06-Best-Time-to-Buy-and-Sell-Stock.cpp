/*
Link: https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int maximumProfit(vector<int> &prices)
    {
        int n = prices.size();
        int ans = 0, sell = prices[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (prices[i] < sell)
                ans = max(ans, sell - prices[i]);
            else
                sell = prices[i];
        }
        return ans;
    }
};
int main()
{
}