/*
Link:https://www.codingninjas.com/codestudio/problems/palindrome-linked-list_8230717?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    LinkedListNode<int> *rev(LinkedListNode<int> *head)
    {
        if (!head or !head->next)
            return head;
        LinkedListNode<int> *prev = nullptr, *curr = head, *nex = nullptr;

        while (curr)
        {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }
    bool isPalindrome(LinkedListNode<int> *head)
    {
        if (!head or !head->next)
            return true;
        LinkedListNode<int> *fast = head, *slow = head;

        while (fast->next)
        {
            fast = fast->next;
            if (!fast->next)
                break;
            fast = fast->next;
            slow = slow->next;
        }
        fast = slow->next;
        slow->next = rev(fast);

        fast = slow->next;
        slow = head;
        while (fast)
        {
            if (fast->data != slow->data)
                return false;
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }
};
// 1 - 2 - 2 - s4 - 5 - 7 - f8
int main()
{
}