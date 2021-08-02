class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int maxsky=0; 
        vector<int> row;
        vector<int> cols;
        
        for(int i=0;i<grid.size();i++){
            int rowmax=INT_MIN, colmax=INT_MIN;
            for(int j=0;j<grid[i].size();j++){
                colmax=max(colmax,grid[j][i]);
                rowmax=max(rowmax,grid[i][j]);
            }
            cols.push_back(colmax);
            row.push_back(rowmax);
        }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int diff = min(row[i],cols[j]);
                maxsky += diff - grid[i][j];
            }
        }
        return maxsky;
    }
};
