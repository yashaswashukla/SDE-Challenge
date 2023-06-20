/*
Link:https://www.codingninjas.com/codestudio/problems/job-sequencing-problem_8230832?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1];
    }
    int jobScheduling(vector<vector<int>> &jobs)
    {
        sort(jobs.begin(), jobs.end(), comp);

        int maxdead = jobs[0][0];
        for (int i = 0; i < jobs.size(); i++)
            maxdead = max(maxdead, jobs[i][0]);

        vector<int> sequence(maxdead + 1, -1);
        int profit = 0;

        for (int i = 0; i < jobs.size(); i++)
        {
            int j = jobs[i][0];
            while (j > 0)
            {
                if (sequence[j] == -1)
                {
                    sequence[j] = i;
                    profit += jobs[i][1];
                    break;
                }
                j--;
            }
        }
        return profit;
    }
};
int main()
{
}