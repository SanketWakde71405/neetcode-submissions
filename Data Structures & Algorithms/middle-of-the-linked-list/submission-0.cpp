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
    ListNode* middleNode(ListNode* head) {
        
        int count=0;

        ListNode* p=head;

        while(p!=NULL){
            count++;
            p=p->next;
        }

        count/=2;
        count++;
        

        int i=0;

        p=head;

        while(p!=NULL){
            i++;
            if(i==count) return p;
            p=p->next;
        }

        return NULL;

    }
};