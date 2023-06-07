/*
Link:
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int> nextPermutation(vector<int> &arr, int n)
    {
        //  Write your code here.
        int j = n - 1;
        while (j > 0)
        {
            if (arr[j - 1] < arr[j])
                break;
            j--;
        }
        if (j <= 0)
        {
            reverse(arr.begin(), arr.end());
            return arr;
        }
        int idx = n - 1;
        while (idx >= j)
        {
            if (arr[idx] > arr[j - 1])
                break;
            idx--;
        }
        swap(arr[idx], arr[j - 1]);

        reverse(arr.begin() + j, arr.end());
        return arr;
    }
};
int main()
{
}