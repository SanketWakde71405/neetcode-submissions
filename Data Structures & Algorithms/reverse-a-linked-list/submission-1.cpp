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
    ListNode* reverseList(ListNode* head) {
     if (!head || head->next == NULL) return head;
     ListNode *p = head;
     ListNode *q = p->next;
     ListNode *r = q->next;

    while (r!=NULL && r->next != NULL)
    {
        q->next = p;
        if(p==head){
           p->next = NULL;
        }
        
        p = q;
        q = r;
        r = q->next;
    }

    if(q!=NULL)q->next=p;

    if(r!=NULL) r->next=q;

    if(p==head){
     p->next = NULL;
    }

    if(r==NULL){
        return q;
    }

    
    return r;
      
        
    }
};
