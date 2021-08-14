class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> vec = matrix;
        int rows = matrix.size();
        int cols = matrix[0].size(), row, col;
        bool flag = false;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(vec[i][j]==0){
                    flag = true;
                    row = i, col = j;
                    for(int k=0;k<rows;k++){
                    matrix[k][col] = 0;
                    }
                }
            }
            if(flag){
                for(int q=0;q<cols;q++){
                    matrix[row][q] = 0;
                }
            }
            flag = false;
        }
    }
};
