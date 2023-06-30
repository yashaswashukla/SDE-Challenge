/*
Link:
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void helper(string &s, int idx, string temp, vector<string> &ans, unordered_set<string> &hash)
    {
        if (idx == (int)s.length())
        {
            ans.push_back(temp);
            return;
        }

        for (int i = idx; i < (int)s.length(); i++)
        {
            string pre = s.substr(idx, i - idx + 1);
            if (hash.count(pre))
                helper(s, i + 1, temp + pre + " ", ans, hash);
        }
    }
    vector<string> wordBreak(string &s, vector<string> &dictionary)
    {
        unordered_set<string> hash;
        for (auto word : dictionary)
            hash.insert(word);
        vector<string> ans;
        string temp = "";
        helper(s, 0, temp, ans, hash);
        return ans;
    }
};
int main()
{
}