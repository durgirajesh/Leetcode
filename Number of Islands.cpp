class Solution {
public:
    void directions(vector<vector<char>> &grid,int x,int y,int r,int c) {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!='1'){
            return;
        }
        grid[x][y]='2';
        directions(grid,x+1,y,r,c);
        directions(grid,x,y+1,r,c);
        directions(grid,x-1,y,r,c);
        directions(grid,x,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    directions(grid,i,j,grid.size(),grid[i].size());
                    count++;
                }
            }
        }
        return count;
    }
};
