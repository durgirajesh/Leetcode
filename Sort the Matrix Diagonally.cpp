class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        map<int,priority_queue<int, vector<int>, greater<int>> > mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                mp[i-j].push(mat[i][j]);
            }
        }
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                mat[i][j]=mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return mat;
    }
};
