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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        vector<int> v;
        
        if(list1==NULL && list2!=NULL){
            ListNode* p=list2;
            while(p!=NULL){
                v.push_back(p->val);
                p=p->next;
            }

            sort(v.begin(),v.end());

            p=list2;

            for(int i=0;i<v.size();i++){
                p->val=v[i];
                p=p->next;
            }

            return list2;

        }
        else if(list2==NULL && list1!=NULL){
            ListNode* p=list1;
            while(p!=NULL){
                v.push_back(p->val);
                p=p->next;
            }

            sort(v.begin(),v.end());

            p=list1;

            for(int i=0;i<v.size();i++){
                p->val=v[i];
                p=p->next;
            }

            return list1;

        }else if(list1==NULL && list2==NULL){
            return NULL;
        }

        ListNode* q=list1;

        while(q!=NULL){
            v.push_back(q->val);
            q=q->next;
        }

        ListNode* r=list2;

        while(r!=NULL){
            v.push_back(r->val);
            r=r->next;
        }

        sort(v.begin(),v.end());

        q=list1;

        int i=0;

        while(q!=NULL){
            q->val=v[i];
            i++;
            q=q->next;
        }

        q=list2;

        while(q!=NULL){
            q->val=v[i];
            i++;
            q=q->next;
        }

        ListNode* s=list1;

        while(s->next!=NULL){
            s=s->next;
        }

        s->next=list2;

        return list1;

    
    }
};
