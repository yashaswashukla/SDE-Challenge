/*
Link: https://www.codingninjas.com/codestudio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *findIntersection(Node *firstHead, Node *secondHead)
    {
        Node *first = firstHead, *second = secondHead;
        bool s1 = false, s2 = false;

        while (first != second)
        {
            first = first->next;
            second = second->next;
            if (!first)
                first = secondHead;
            if (!second)
                second = firstHead;
        }
        return first->data;
    }
};
int main()
{
}