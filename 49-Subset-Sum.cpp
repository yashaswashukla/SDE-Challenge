/*
Link:https://www.codingninjas.com/studio/problems/subset-sum_8230859?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void helper(vector<int> &num, int idx, int sum, vector<int> &ans)
    {
        ans.push_back(sum);
        for (int i = idx; i < num.size(); i++)
        {
            cout<<num[i]<<" ";
            sum += num[i];
            helper(num, i + 1, sum, ans);
            sum -= num[i];
        }
        cout<<endl;
    }
    vector<int> subsetSum(vector<int> &num)
    {
        vector<int> ans;
        int sum = 0;
        helper(num, 0, sum, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
}