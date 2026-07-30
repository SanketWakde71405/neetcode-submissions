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
    bool isPalindrome(ListNode* head) {

        string s="";

        ListNode* p= head;

        while(p!=NULL){
            s+=(p->val)+'0';
            p=p->next;
        }

        string r=s;

        reverse(r.begin(),r.end());

        if(r==s) return true;

        return false;
        
    }
};