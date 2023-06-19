/*
Link:https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_8230811?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int removeDuplicates(vector<int> &arr, int n)
    {
        int i = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] != arr[j])
                arr[++i] = arr[j];
        }
        return i + 1;
    }
};
int main()
{
}