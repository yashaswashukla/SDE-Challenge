/*
Link: https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int findDuplicate(vector<int> &arr, int n)
    {
        int slow = arr[0], fast = arr[0];
        do
        {
            slow = arr[slow];
            fast = arr[arr[fast]];
        } while (fast != slow);

        fast = arr[0];
        while (slow != fast)
        {
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }
};
int main()
{
}