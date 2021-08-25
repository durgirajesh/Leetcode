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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(!root){
            return ans;
        }
        
        queue<TreeNode* > q;
        q.push(root);
        int cnt = 1;
        while(!q.empty()){
            int n = q.size();
            vector<int> level;
            
            while(n--){
                TreeNode* tmp = q.front();
                level.push_back(tmp->val);
                q.pop();
                
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
            if(cnt%2==0){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            cnt++;
        }
        
        return ans;
    }
};
