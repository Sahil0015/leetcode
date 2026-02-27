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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL and l2==NULL)
        return l1;
        if(l1==NULL)
        return l2;
        if(l2==NULL)
        return l1;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        ListNode *new_head=NULL,*tail=NULL;
            if(temp1->val<temp2->val)
            {
                new_head=temp1;
                tail=temp1;
                temp1=temp1->next;
            }
            else if(temp1->val>=temp2->val)
            {
                new_head=temp2;
                tail=temp2;
                temp2=temp2->next;
            }
        while(temp1!=NULL and temp2!=NULL)
        {
            if(temp1->val<temp2->val)
            {
                tail->next=temp1;
                tail=temp1;
                temp1=temp1->next;
            }
            else
            {
                tail->next=temp2;
                tail=temp2;
                temp2=temp2->next;
            }
        }
        if(temp1==NULL)
        tail->next=temp2;
        else
        tail->next=temp1;
        return new_head;
    }
};