/*
Link:https://www.codingninjas.com/studio/problems/day-13-print-permutations-string_8230703?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void helper(string &s, int idx, vector<string> &ans)
    {
        if (idx == (int)s.length())
        {
            ans.push_back(s);
            return;
        }
        for (int i = idx; i < (int)s.length(); i++)
        {
            swap(s[i], s[idx]);
            helper(s, idx + 1, ans);
            swap(s[i], s[idx]);
        }
    }
    vector<string> findPermutations(string &s)
    {
        vector<string> ans;
        helper(s, 0, ans);
        return ans;
    }
};
int main()
{
}