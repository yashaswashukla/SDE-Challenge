/*
Link:https://www.codingninjas.com/codestudio/problems/reverse-nodes-in-k-group_8230709?challengeSlug=striver-sde-challenge&leftPanelTab=3
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    Node *reverseKGroup(Node *head, int idx, int b[], int n)
    {
        if (idx >= n)
            return head;
        if (!head or !b[idx])
            return head;
        int i = 0;
        Node *prev = nullptr, *curr = head, *nx = nullptr;
        while (curr)
        {
            curr = curr->next;
            i++;
        }

        if (i < b[idx])
        {
            curr = head;
            while (curr)
            {
                nx = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nx;
            }
            return prev;
        }

        i = 0;
        curr = head;
        while (i < b[idx] and curr)
        {
            nx = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nx;
            i++;
        }
        if (nx)
            head->next = reverseKGroup(nx, idx + 1, b, n);
        return prev;
    }
    Node *getListAfterReverseOperation(Node *head, int n, int b[])
    {
        if (!head or !n)
            return head;
        return reverseKGroup(head, 0, b, n);
    }
};
int main()
{
}

/*
2 5 7 8 4 -1
3
2 3 4

5 2 4 8 7 -1
*/