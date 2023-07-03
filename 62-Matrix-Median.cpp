/*
Link:https://www.codingninjas.com/studio/problems/matrix-median_8230735?challengeSlug=striver-sde-challenge&leftPanelTab=0
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int findsmaller(vector<int> arr, int key)
    {
        int low = 0, high = arr.size();
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > key)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
    int getMedian(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        int low = 0, high = 1e9;
        for (int i = 0; i < n; i++)
        {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][m - 1]);
        }
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            int count = 0;
            for (int i = 0; i < n; i++)
                count += findsmaller(matrix[i], mid);
            if (count <= (n * m) / 2)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
};
int main()
{
}