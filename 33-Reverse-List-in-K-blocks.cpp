/*
Link:https://www.codingninjas.com/codestudio/problems/reverse-nodes-in-k-group_8230709?challengeSlug=striver-sde-challenge&leftPanelTab=3
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *getListAfterReverseOperation(Node *head, int n, int b[])
    {
        // Write your code here.
        if (!head or !head->next)
            return head;

        Node *ptr = head;
        Node *prev = ptr, *curr, *next;
        for (int i = 0; i < n; i++)
        {
            int k = b[i];
            if (k == 1)
                prev = prev->next;
            else if (k > 1)
            {
                int count = k;
                curr = prev->next;
                next = curr->next;

                while (count != 1)
                {
                    if (!next)
                        return ptr->next;

                    curr->next = next->next;
                    next->next = prev->next;
                    prev = next;
                    next = curr->next;
                    count--;
                }

                prev = curr;
                if (!next)
                    return ptr->next;
            }
        }
        return ptr->next;
    }

    Node *getListAfterReverseOperation(Node *head, int n, int b[])
    { // Write your code here.
        if (head == NULL || head->next == NULL)
            return head;
        Node *t = head;
        Node *dummy = new Node(-1);
        dummy->next = head;
        Node *prev = dummy;
        Node *curr;
        Node *nxt;
        int i = 0;
        while (curr->next != NULL && i < n)
        {
            curr = prev->next;
            nxt = curr->next;
            int j = b[i] - 1;

            while (j > 0 && curr->next != NULL)
            {
                curr->next = nxt->next;
                nxt->next = prev->next;
                prev->next = nxt;
                nxt = curr->next;
                j--;
            }
            if (j >= 0)
            {
                prev = curr;
            }
            i++;
        }
        return dummy->next;
    }
};
int main()
{
}