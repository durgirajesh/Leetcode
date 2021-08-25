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
    vector<int> res;
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            res.push_back(root->val);
            inorder(root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        map<int,int> mp;
        
        for(int i=0;i<res.size();i++){
            if(mp.count(res[i])==0){
                mp[res[i]]=i;
            }
            if(mp.count(k-res[i])==1 && i!=mp[k-res[i]]){
                return true;
            }
        }
        return false;
    }
};
