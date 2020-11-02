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
    ListNode* insertionSortList(ListNode* head) {
        
        ListNode* t = head;
        
        int count=1;
        while(t->next!=NULL)
        {
            count++;
            t = t->next;
        }
        
        ListNode* temp =head;
        //cout<<temp->val<<endl;
        temp=temp->next;
        //cout<<temp->val<<endl;
        for(int i=1;i<=count;i++)
        {
            ListNode* pointer = head;
            int c=1;
            while(c<i)
            {
                cout<<temp->val<<endl;
                int a=pointer->val;
                int b=temp->val;
            if(a>b)
            {
                pointer->val = b;
                temp->val = a;
            }
                pointer=pointer->next;
                c++;
            }
            temp=temp->next;
        }
        return temp;
    }
};