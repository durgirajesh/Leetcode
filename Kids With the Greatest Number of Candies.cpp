class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n=candies.size(),max=0;
        
        for(int i=0;i<n;i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        
        vector<bool>result(n);
        
        for(int i=0;i<n;i++){
            result[i] = (candies[i] + extraCandies >= max);
        }
        return result;
    }

};
