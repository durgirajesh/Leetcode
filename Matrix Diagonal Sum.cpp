class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1=0, sum2=0;
        int rows=mat.size(); int cols=mat[0].size();
        bool bl[rows][cols];
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                bl[i][j]=false;
            }
        }
        
        int x=0, y=mat.size()-1;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(i==j && !bl[i][j]){
                    sum1+=mat[i][j];
                    bl[i][j]=true;
                }
            }
            if(!bl[x][y]){
                sum2+=mat[x][y];
                bl[x][y]=true;
            }
            x++;y--;
        }
        return sum1+sum2;
    }
};
