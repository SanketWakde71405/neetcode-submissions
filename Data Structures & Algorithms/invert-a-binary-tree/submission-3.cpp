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
    TreeNode* invertTree(TreeNode* root) {
        
        static TreeNode* origin=root;
        TreeNode* ptr;

        if(root==NULL) return NULL;

        
        ptr=root->left;
        root->left=root->right;
        root->right=ptr;
    

        if(root->left!=NULL){
            invertTree(root->left);
        }

        if(root->right!=NULL){
            invertTree(root->right);
        }

        return root;



        


    }
};
