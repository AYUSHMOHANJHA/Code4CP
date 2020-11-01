/*
-----------------------------------------------------
| Convert Binary Number in a Linked List to Integer |
-----------------------------------------------------

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10


Input: head = [1]
Output: 1

Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
Output: 18880

Input: head = [0,0]
Output: 0
-------------------------------------------------------
Constraints:

The Linked List is not empty.
Number of nodes will not exceed 30.
Each node's value is either 0 or 1.
-------------------------------------------------------
*/ 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        vector<int>v;
        ListNode* node = head;
        while(head->next!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        v.push_back(head->val);

        int res=0,index=0;
        for(int i=v.size()-1;i>=0;--i){
        if(v[index]==1){
            res=res+pow(2,i);
        }
            index++;
        }
            return res;
    }
};