/*
Link: https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++)
        {
            auto back = ans.back();
            if (back[1] >= intervals[i][0])
                ans[ans.size() - 1][1] = max(back[1], intervals[i][1]);
            else
                ans.push_back(intervals[i]);
        }
        return ans;
    }
};
int main()
{
}