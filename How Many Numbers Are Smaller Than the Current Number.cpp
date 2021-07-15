class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> vec;
        int cnt=0;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                
                if(i==j){
                    continue;
                }
                
                if(j!=i && nums[j] < nums[i]){
                    cnt++;
                }
            }
            vec.push_back(cnt);
            cnt=0;
        }
        
        return vec;
    }
};
