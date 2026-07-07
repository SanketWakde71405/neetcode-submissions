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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
         
        int length=0;

        ListNode* p=head;

        while(p!=NULL){
            length++;
            p=p->next;
        }

        int ind=length-n+1;

        p=head;
        ListNode* q=p->next;

        


        if(ind==1){
            delete p;
            return q;
        }

        int i=1;

        while(i!=ind-1){
            q=q->next;
            p=p->next;
            i++;
        }

        p->next=q->next;
        delete q;
        
        return head;


    }
};
