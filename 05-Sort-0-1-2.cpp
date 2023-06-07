/*
Link:https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void sort012(int *arr, int n)
    {
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[low]);
                mid++;
                low++;
            }
            else if (arr[mid] == 1)
                mid++;
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};
int main()
{
}