class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        int ans=1, size = n;
        int start=0, end=size;
        
        for(int i=0;i<n;i++){
            for(int j=start;j<end;j++){
                res[i][j]=ans++;
            }
            for(int k=start+1;k<end;k++){
                res[k][end-1]=ans++;
            }
            for(int q=end-2;q>=start;q--){
                res[end-1][q]=ans++;
            }
            for(int w=end-2;w>=start+1;w--){
                res[w][start]=ans++;
            }
            start++; end--;
        }
        return res;
    }
};
