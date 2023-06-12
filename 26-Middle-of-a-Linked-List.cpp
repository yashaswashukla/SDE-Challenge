/*
Link: https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_8230764?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *findMiddle(Node *head)
    {
        if (!head or !head->next)
            return head;
        Node *fast = head, *slow = head;

        while (fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
int main()
{
}