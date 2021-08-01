class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        
        for(int i=0;i<image.size();i++){
            vector<int> vec;
            for(int j=image[i].size()-1;j>=0;j--){
                vec.push_back(image[i][j]);
            }
            ans.push_back(vec);
        }
        
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                if(ans[i][j]==0){
                    ans[i][j]=1;
                }
                else{
                    ans[i][j]=0;
                }
            }
        }
        
        return ans;
    }
};
