/*
Link:https://www.codingninjas.com/codestudio/problems/maximum-meetings_8230795?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
struct meet
{
    int start, end, pos;
};
class Solution
{
    bool comp(struct meet &a, struct meet &b)
    {
        if (a.end < b.end)
            return true;
        else if (a.pos < b.pos)
            return true;
        return false;
    }
    vector<int> maximumMeetings(vector<int> &start, vector<int> &end)
    {
        int n = start.size();
        vector<struct meet> arr(n);
        for (int i = 0; i < n; i++)
            arr[i].start = start[i], arr[i].end = end[i], arr[i].pos = i + 1;
        sort(arr.begin(), arr.end(), comp);

        vector<int> ans;
        ans.push_back(arr[0].pos);
        int prev = arr[0].end;
        for (int i = 1; i < n; i++)
        {
            if (arr[i].start > prev) 
            {
                ans.push_back(arr[i].pos);
                prev = arr[i].end;
            }
        }
        return ans;
    }
};
int main()
{
}