/*
Link:https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *removeKthNode(Node *head, int k)
    {
        // Write your code here.
        Node *fast = head;
        while (k--)
            fast = fast->next;
        if (!fast)
            return head->next;
        Node *slow = head;
        while (fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;
        return head;
    }
};
int main()
{
}