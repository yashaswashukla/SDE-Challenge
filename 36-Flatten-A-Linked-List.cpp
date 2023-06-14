/*
Link:https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_8230827?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *flattenLinkedList(Node *head)
    {
        Node *ptr = head;
        while (ptr)
        {
            Node *next = ptr->next;
            Node *ch = ptr->child;
            Node *temp = ch;
            while (temp and temp->child)
            {
                temp->next = temp->child;
                temp->child = nullptr;
                temp = temp->next;
            }
            ptr->child = nullptr;
            temp->next = next;
            ptr->next = temp;
            ptr = next;
        }

        return head;
    }
};
int main()
{
}