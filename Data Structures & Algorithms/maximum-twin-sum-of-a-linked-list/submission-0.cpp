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
    int pairSum(ListNode* head) {
        
        stack<int> st;
        int size=0;
        ListNode* ptr=head;

        while(ptr!=NULL){
            st.push(ptr->val);
            ptr=ptr->next;
            size++;
        }

        size/=2;

        ptr=head;
        int max=0;
        while(size!=0){
            if(((ptr->val)+ st.top()) >max){
              max= (ptr->val)+ st.top();
            }
            ptr=ptr->next;
            size--;
            st.pop();
        }

        return max;


    }
};