class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> res;
        int rows=queens.size();
        int cols=queens[0].size();
        vector<vector<int>> matrix(8,vector<int>(8,0));
        matrix[king[0]][king[1]]=1;
        
        for(int i=0;i<queens.size();i++){
            int x1 = queens[i][0];
            int x2 = queens[i][1];
            
            matrix[x1][x2]=2;
        }
        
        vector<vector<int>> pos={{0,1},{1,0},{1,1},{-1,-1},{-1,0},{0,-1},{1,-1},{-1,1}};
        for(int i=0;i<8;i++){
            vector<int> ans;
            int x = king[0], y = king[1];
            int k1=x+pos[i][0];
            int k2=y+pos[i][1];
            
            while(k1>=0 && k1<8 && k2>=0 && k2<8){
                if(matrix[k1][k2]==2){
                    ans.push_back(k1);
                    ans.push_back(k2);
                    
                    res.push_back(ans);
                    break;
                }
                k1 = pos[i][0]==0 ? k1 : k1+pos[i][0];
                k2 = pos[i][1]==0 ? k2 : k2+pos[i][1]; 
                
            }
        }
        return res;
    }
};
