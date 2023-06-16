/*
Link:https://www.codingninjas.com/codestudio/problems/3sum_8230739?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
    {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            int target = K - arr[i];
            if (i == 0 or (i > 0 and arr[i] != arr[i - 1]))
            {
                int low = i + 1, high = n - 1;
                while (low < high)
                {
                    if (arr[low] + arr[high] == target)
                    {
                        ans.push_back({arr[i], arr[low], arr[high]});
                        while (low < high and arr[low] == arr[low + 1])
                            low++;
                        while (low < high and arr[high] == arr[high - 1])
                            high--;
                        low++, high--;
                    }
                    else if (arr[low] + arr[high] < target)
                        low++;
                    else
                        high--;
                }
            }
        }
        return ans;
    }
};
int main()
{
}