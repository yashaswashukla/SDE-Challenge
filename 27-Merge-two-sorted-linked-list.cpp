/*
Link: https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
    {
        if (!first and !second)
            return nullptr;
        if (first and !second)
            return first;
        if (!first and second)
            return second;

        Node<int> *ans;
        if (first->data < second->data)
        {
            ans = first;
            first = first->next;
        }
        else
        {
            ans = second;
            second = second->next;
        }

        Node<int> *ptr = ans;

        while (first and second)
        {

            if (first->data < second->data)
            {
                ptr->next = first;
                ptr = ptr->next;
                first = first->next;
            }
            else
            {
                ptr->next = second;
                ptr = ptr->next;
                second = second->next;
            }
        }

        if (first)
            ptr->next = first;

        if (second)
            ptr->next = second;

        return ans;
    }
};
int main()
{
}