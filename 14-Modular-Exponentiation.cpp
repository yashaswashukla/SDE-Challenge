/*
Link:https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge&leftPanelTab=3
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{

    int modularExponentiation(int x, int n, int m)
    {
        long ans = 1, sq = x;
        while (n)
        {
            if (n % 2)
                ans = ((ans) % m * (sq) % m) % m;
            sq = ((sq) % m * (sq) % m) % m;
            n = n >> 1;
        }
        return (int)(ans % m);
    }
};
int main()
{
}