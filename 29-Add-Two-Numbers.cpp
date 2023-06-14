/*
Link:https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node *addTwoNumbers(Node *num1, Node *num2)
    {
        // Write your code here.
        Node *ans = new Node(0);
        Node *ptr = ans;
        int carry = 0;
        while (num1 or num2 or carry)
        {
            int sum = 0;
            if (num1)
            {
                sum += num1->data;
                num1 = num1->next;
            }
            if (num2)
            {
                sum += num2->data;
                num2 = num2->next;
            }
            sum += carry;

            carry = sum / 10;
            Node *temp = new Node(sum % 10);
            ptr->next = temp;
            ptr = temp;
        }
        return ans->next;
    }
};
int main()
{
}