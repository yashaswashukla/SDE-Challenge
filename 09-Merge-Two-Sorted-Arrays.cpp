/*
Link:codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
    {
        vector<int> ans;
        int i = 0, j = 0;
        while (i < m and j < n)
        {
            if (arr1[i] < arr2[j])
                ans.push_back(arr1[i++]);
            else if (arr2[j] < arr1[i])
                ans.push_back(arr2[j++]);
            else
            {
                ans.push_back(arr1[i++]);
                ans.push_back(arr2[j++]);
            }
        }

        while (i < m)
            ans.push_back(arr1[i++]);

        while (j < n)
            ans.push_back(arr2[j++]);

        return ans;
    }
};
class optimalSolution
{

    vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
    {
        int i = m - 1, j = n - 1;
        int k = m + n - 1;

        while (i >= 0 and j >= 0)
        {
            if (arr1[i] > arr2[j])
                arr1[k--] = arr1[i--];
            else
                arr1[k--] = arr2[j--];
        }

        while (j >= 0)
            arr1[k--] = arr2[j--];

        return arr1;
    }
};
int main()
{
}