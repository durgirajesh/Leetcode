class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int rows = accounts.size();
        int cols= accounts[0].size();
        
        vector<int>r(rows);
        
        int sum=0,q=0;
        
        for(int i=0;i<rows;i++){
            
            for(int j=0;j<cols;j++){
                sum+=accounts[i][j];
            }
            r[q]=sum;
            sum=0;q++;
        }
        
        int max=0;
        
        for(int i=0;i<rows;i++){
            if(r[i]>max){
                max=r[i];
            }
        }
        
        return max;
    }
};
