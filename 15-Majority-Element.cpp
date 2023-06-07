/*
Link: https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int findMajorityElement(int arr[], int n)
    {
        int candidate = arr[0], vote = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == candidate)
                vote++;
            else
                vote--;

            if (vote < 0)
            {
                candidate = arr[i];
                vote = 1;
            }
        }
        vote = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == candidate)
                vote++;
        return (vote > n / 2) ? candidate : -1;
    }
};
int main()
{
}