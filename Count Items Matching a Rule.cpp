class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int rows=items.size();
        int cols=items[0].size();
        int count=0;
        
        for(int i=0;i<rows;i++){

            for(int j=0;j<cols;j++){
                
                if(ruleKey=="type"){
                    if(items[i][j]==ruleValue){
                        count++;
                    }
                }
                
                else if(ruleKey=="color"){
                    if(items[i][j+1]==ruleValue){
                        count++;
                    }
                }
                
                else if(ruleKey=="name"){
                    if(items[i][j+2]==ruleValue){
                        count++;
                    }
                }
                j=cols-1;
            }
        }
        return count;
    }
};
