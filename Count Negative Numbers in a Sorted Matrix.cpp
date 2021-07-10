class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int no=0;
        
        int rows=grid.size();
        int cols=grid[0].size();
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] < 0){
                    no++;
                }
            }
        }
        
        return no;
    }
};
