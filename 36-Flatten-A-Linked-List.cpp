/*
Link:https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_8230827?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *merge(Node *down, Node *right)
    {
        if (!down)
            return right;
        if (!right)
            return down;

        Node *ans = new Node(0);
        Node *temp = ans;
        while (down and right)
        {
            if (down->data < right->data)
            {
                temp->child = down;
                temp = down;
                down = down->child;
            }
            else
            {
                temp->child = right;
                temp = right;
                right = right->child;
            }
        }

        if (down)
            temp->child = down;
        else
            temp->child = right;

        return ans;
    }
    Node *flattenLinkedList(Node *head)
    {
        if (!head)
            return head;
        Node *down = head;
        Node *right = head->next;
        head->next = nullptr;
        right = flattenLinkedList(right);

        Node *ans = merge(down, right);
        return ans;
    }
};
int main()
{
}