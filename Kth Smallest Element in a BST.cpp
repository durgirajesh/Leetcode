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
    priority_queue<int, vector<int>, greater<int>> pq;
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            pq.push(root->val);
            inorder(root->right);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        while(k!=1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};
