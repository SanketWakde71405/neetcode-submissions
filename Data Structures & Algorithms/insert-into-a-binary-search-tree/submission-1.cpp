/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        TreeNode* ptr=root;
        TreeNode* prev=NULL;
        while(ptr!=NULL){
             if(val>ptr->val){
                prev=ptr;
                ptr=ptr->right;
             }
             else{
                prev=ptr;
                ptr=ptr->left;
             }
        }

        
        TreeNode* newNode= new TreeNode(val);

        if(prev==NULL){
             return newNode;
        }


        if(val>prev->val){
            prev->right=newNode;
        }else{
            prev->left=newNode;
        }

        return root;


        
    }
};