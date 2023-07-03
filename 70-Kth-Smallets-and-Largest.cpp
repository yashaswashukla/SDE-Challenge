/*
Link:https://www.codingninjas.com/studio/problems/kth-smallest-and-largest-element-of-array_8230829?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
    {
        vector<int> ans(2);
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (pq.size() > k)
                pq.pop();
        }
        ans[1] = pq.top();

        priority_queue<int> nq;
        for (int i = 0; i < n; i++)
        {
            nq.push(arr[i]);
            if (nq.size() > k)
                nq.pop();
        }
        ans[0] = nq.top();
        return ans;
    }
};
class quickSelect
{
    int partition(vector<int> &arr, int low, int high)
    {
        int pivot = arr[low];
        int i = low, j = high;
        while (i < j)
        {
            while (i < high and arr[i] <= pivot)
                i++;
            while (j > low and arr[j] > pivot)
                j--;
            if (i < j)
                swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    }
    int QuickSelect(vector<int> &arr, int low, int high, int k)
    {
        if (low >= high)
            return arr[low];
        int par = partition(arr, low, high);
        if (par + 1 == k)
            return arr[par];

        if (par + 1 > k)
            return QuickSelect(arr, low, par - 1, k);
        else
            return QuickSelect(arr, par, high, k);
    }
    vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
    {
        vector<int> ans;
        ans.push_back(QuickSelect(arr, 0, n - 1, k));
        ans.push_back(QuickSelect(arr, 0, n - 1, n - k + 1));
        return ans;
    }
};
int main()
{
}