class Solution {
public:
    void optimizerows(vector<vector<int>>& grid,int n) {
        for(int i=0;i<n;i++){
            if(grid[i][0]==0){
                for(int j=0;j<grid[i].size();j++){
                    grid[i][j] = grid[i][j]==1 ? 0 : 1;
                }
            }
        }
    }
    void optimizecols(vector<vector<int>>& grid){
        int n = grid.size();
        for(int i=0;i<grid[0].size();i++){
            int cnt1=0, cnt0=0, k=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==1){
                    cnt1++;
                }
                else{
                    cnt0++;
                }
            }
            if(cnt0 > cnt1){
                for(int k=0;k<grid.size();k++){
                    grid[k][i] = grid[k][i]==0 ? 1 : 0;
                }
            }
        }
    }
    int matrixScore(vector<vector<int>>& grid) {
        int sum = 0, rows = grid.size();
        if(rows==1){
            return 1;
        }
        optimizerows(grid,rows);
        optimizecols(grid);
        
        for(int i=0;i<grid.size();i++){
            int k = grid[i].size()-1;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    sum+=pow(2,k);
                }
                k--;
            }
        }
        return sum;
    }
};
