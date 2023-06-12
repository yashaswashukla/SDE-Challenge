/*
Link:https://www.codingninjas.com/codestudio/problems/longest-substring-without-repeating-characters_8230684?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int uniqueSubstrings(string input)
    {
        bool hash[26] = {0};
        int i = 0, j = 1, ans = 1;
        hash[input[0] - 'a'] = 1;
        while (j < (int)input.length())
        {
            if (hash[input[j] - 'a'])
            {
                hash[input[i] - 'a'] = 0;
                i++;
            }
            else
            {
                hash[input[j] - 'a'] = 1;
                j++;
                ans = max(ans, j - i);
            }
        }
        return ans;
    }
};
int main()
{
}