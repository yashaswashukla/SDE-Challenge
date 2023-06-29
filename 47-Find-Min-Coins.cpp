/*
Link:https://www.codingninjas.com/studio/problems/find-minimum-number-of-coins_8230766?challengeSlug=striver-sde-challengehttps://www.codingninjas.com/studio/problems/find-minimum-number-of-coins_8230766?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int findMinimumCoins(int amount)
    {
        vector<int> notes = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
        int mincoins = 0;
        for (int i = 8; i >= 0; i--)
        {
            if (amount < notes[i])
                continue;
            int coin = amount / notes[i];
            mincoins += coin;
            amount -= coin * notes[i];
            if (!amount)
                break;
        }
        return mincoins;
    }
};
int main()
{
}