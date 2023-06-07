/*
Link:https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int> majorityElementII(vector<int> &arr)
    {
        int cand1, vote1 = 0, cand2, vote2 = 0;
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == cand1)
                vote1++;
            else if (arr[i] == cand2)
                vote2++;
            else if (vote1 == 0)
            {
                cand1 = arr[i];
                vote1 = 1;
            }
            else if (vote2 == 0)
            {
                cand2 = arr[i];
                vote2 = 1;
            }
            else
            {
                vote1--;
                vote2--;
            }
        }

        vote1 = 0, vote2 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == cand1)
                vote1++;
            else if (arr[i] == cand2)
                vote2++;
        }

        if (vote1 > arr.size() / 3)
            ans.push_back(cand1);
        if (vote2 > arr.size() / 3)
            ans.push_back(cand2);
        return ans;
    }
};
int main()
{
}