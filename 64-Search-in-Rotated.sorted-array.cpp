/*
Link:https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_8230687?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int search(int *arr, int n, int key)
    {
        // Write your code here.
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key)
                return mid;
            else if (arr[low] <= arr[mid])
            {
                if (key >= arr[low] and key <= arr[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else
            {
                if (key <= arr[high] and key >= arr[mid])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};
int main()
{
}