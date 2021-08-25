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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode* > q;
        
        if(!root){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> vec;
            while(n--){
                TreeNode* tmp = q.front();
                vec.push_back(tmp->val);
                q.pop();
                
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
            ans.push_back(vec);
        }
        
        vector<vector<int>> res;
        for(int i=ans.size()-1;i>=0;i--){
            res.push_back(ans[i]);
        }
        return res;
    }
};
