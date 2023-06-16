/*
Link:https://www.codingninjas.com/codestudio/problems/rotate-linked-list_8230752?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int find(Node *head)
    {
        int len = 0;
        Node *ptr = head;
        while (ptr)
        {
            len++;
            ptr = ptr->next;
        }
        return len;
    }
    Node *rotate(Node *head, int k)
    {
        Node *fast = head, *slow = head;
        k = k % find(head);
        if (!k)
            return head;
        fast = head;
        while (k--)
            fast = fast->next;

        while (fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        Node *newhead = slow->next;
        fast->next = head;
        slow->next = nullptr;
        return newhead;
    }
    // s1 s2 s3 s4 f5 f6
};
int main()
{
}