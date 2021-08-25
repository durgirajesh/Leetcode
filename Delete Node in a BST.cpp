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
    TreeNode* minvalue(TreeNode* root){
        TreeNode* tmp=root;
        while(tmp && tmp->left!=NULL){
            tmp=tmp->left;
        }
        return tmp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return NULL;
        }
        
        if(key > root->val){
            root->right = deleteNode(root->right,key);
        }
        else if(key < root->val){
            root->left = deleteNode(root->left,key);
        }
        else{
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }
            else if(root->left==NULL){
                TreeNode* tmp = root->right;
                root=root->left;
                return tmp;
            }
            else if(root->right==NULL){
                TreeNode* tmp = root->left;
                root=root->right;
                return tmp;
            }
            
            TreeNode* tp = minvalue(root->right);
            root->val = tp->val;
            root->right = deleteNode(root->right,tp->val);
        }
        return root;
    }
};