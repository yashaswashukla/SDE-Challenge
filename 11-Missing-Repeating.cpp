/*
Link: https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    pair<int, int> missingAndRepeating(vector<int> &arr, int n)
    {
        long long cursum = 0, actsum = ((long long)n * (long long)(n + 1)) / 2;
        for (auto x : arr)
            cursum += (long long)x;
        long long sqcursum = 0, sqactsum = ((long long)n * (long long)(n + 1) * (long long)(2 * n + 1)) / 6;
        for (auto x : arr)
            sqcursum += (long long)x * (long long)x;
        long long diff = cursum - actsum, sqdiff = sqcursum - sqactsum;
        long long sum = sqdiff / diff;

        long long repeating = (sum + diff) / 2;
        long long missing = sum - repeating;
        return {(int)missing, (int)repeating};
    }
};
int main()
{
}