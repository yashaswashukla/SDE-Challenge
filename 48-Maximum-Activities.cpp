/*
Link:https://www.codingninjas.com/studio/problems/maximum-activities_8230800?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class job
{
    int start, end;
};
class Solution
{
    bool comp(job &a, job &b)
    {
        return a.end < b.end;
    }
    int maximumActivities(vector<int> &start, vector<int> &finish)
    {
        vector<job> arr(start.size());
        for (int i = 0; i < start.size(); i++)
        {
            arr[i].start = start[i];
            arr[i].end = finish[i];
        }

        sort(arr.begin(), arr.end(), comp);

        int lastfinish = arr[0].end, count = 1;
        for (int i = 1; i < start.size(); i++)
        {
            if (arr[i].start >= lastfinish)
            {
                lastfinish = arr[i].end;
                count++;
            }
        }
        return count;
    }
};
int main()
{
}