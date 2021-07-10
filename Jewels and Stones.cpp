class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int l1=jewels.length();
        int l2=stones.length();
        
        int count=0;
        
        for(int i=0;i<l2;i++){
            
            for(int j=0;j<l1;j++){
                
                if(stones[i] == jewels[j]){
                    count++;
                }
            }
        }
        
        return count;
        
    }
};
