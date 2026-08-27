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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* p = head;
        ListNode* q = head->next;
        ListNode* r=NULL;

        int a=0;

        while(q!=NULL){
            a=gcd(p->val, q->val);
            ListNode* r= new ListNode(a);
            r->next=q;
            p->next=r;
            p=q;
            q=q->next;
            
        }

        return head;
        
    }
};