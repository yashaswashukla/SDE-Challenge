/*
Link:https://www.codingninjas.com/codestudio/problems/copy-list-with-random-pointer_8230734?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
    {
        if (!head)
            return nullptr;
        unordered_map<LinkedListNode<int> *, LinkedListNode<int> *> hash;
        LinkedListNode<int> *ptr = head;
        while (ptr)
        {
            hash[ptr] = new LinkedListNode<int>(ptr->data);
            ptr = ptr->next;
        }
        ptr = head;
        while (ptr)
        {
            hash[ptr]->next = hash[ptr->next];
            hash[ptr]->random = hash[ptr->random];
            ptr = ptr->next;
        }
        return hash[head];
    }

    LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
    {
        if (!head)
            return nullptr;

        LinkedListNode<int> *ptr = head, *ans;
        while (ptr)
        {
            LinkedListNode *nx = ptr->next;
            ptr->next = new LinkedListNode<int>(ptr->data);
            ptr->next->next = nx;
            ptr = nx;
        }

        ptr = head;
        ans = head->next;
        while (ans->next)
        {
            ans->random = ptr->random ? ptr->random->next : nullptr;
            ptr = ans->next;
            ans = ptr->next;
        }
        ans = new LinkedListNode<int>(-1);
        ptr = head;
        LinkedListNode<int> *temp = ans;

        while (ptr)
        {
            temp->next = ptr->next;
            temp = temp->next;

            ptr->next = temp->next;
            ptr = ptr->next;
        }

        return ans->next;
    }
}