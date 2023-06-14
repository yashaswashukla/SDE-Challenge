/*
Link: https://www.codingninjas.com/codestudio/problems/linked-list-cycle-ii_8230823?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *firstNode(Node *head)
    {
        if (!head or !head->next)
            return nullptr;
        Node *fast = head, *slow = head;
        while (fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                fast = head;
                while (fast != slow)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};
int main()
{
}