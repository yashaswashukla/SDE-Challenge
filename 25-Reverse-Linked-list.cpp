/*
Link: https://www.codingninjas.com/codestudio/problems/reverse-linked-list_8230724?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class recSolution
{
    LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
    {
        if (!head or !head->next)
            return head;

        LinkedListNode<int> *rest;
        rest = reverseLinkedList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return rest;
    }
};
class itrSolution
{

    LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
    {
        if (!head or !head->next)
            return head;
        LinkedListNode<int> *prev = nullptr, *curr = head, *next = head->next;

        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
int main()
{
}