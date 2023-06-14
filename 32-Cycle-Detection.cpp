/*
Link: https://www.codingninjas.com/codestudio/problems/cycle-detection-in-a-singly-linked-list_8230683?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool detectCycle(Node *head)
    {
        Node *fast = head, *slow = head;
        while (fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow)
                return true;
        }
        return false;
    }
};
int main()
{
}