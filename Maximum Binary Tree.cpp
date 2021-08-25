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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
        
        int maxi = nums[0], indx = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                indx = i;
            }
        }
        
        TreeNode* root = new TreeNode(maxi);
        vector<int> left;
        for(int i=0;i<indx;i++){
            left.push_back(nums[i]);
        }
        root->left = constructMaximumBinaryTree(left);
        
        vector<int> right;
        for(int i=indx+1;i<nums.size();i++){
            right.push_back(nums[i]);
        }
        root->right = constructMaximumBinaryTree(right);
        return root;
    }
};
