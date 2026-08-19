/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* p=headA;

        unordered_map<ListNode*,int> mp;

        while(p!=NULL){
            mp[p]++;
            p=p->next;
        }

        ListNode* ptr=headB;

        while(!mp[ptr] && ptr!=NULL){
            ptr=ptr->next;
        }

        if(ptr!=NULL) return ptr;

        return NULL;
    }
};