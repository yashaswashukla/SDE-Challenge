/*
Link:https://www.codingninjas.com/codestudio/problems/delete-node-in-a-linked-list_8230813?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{

    void deleteNode(LinkedListNode<int> *node)
    {
        // Write your code here.
        node->data = node->next->data;
        node->next = node->next->next;
    }
};
int main()
{
}