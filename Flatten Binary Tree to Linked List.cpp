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
    vector<TreeNode*>res;
    void preorder(TreeNode* root){
        if(root!=NULL){
            res.push_back(root);
            preorder(root->left);
            preorder(root->right);
        }
    }
    void flatten(TreeNode* root) {
        preorder(root);
        TreeNode* tmp = root;
        for(int i=1;i<res.size();i++){
            tmp->left = NULL;
            tmp->right = res[i];
            tmp = tmp->right;
        }
    }
};
