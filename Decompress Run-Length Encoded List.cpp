class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> vec;
        int n=nums.size();
        int i=0;
        
        while(i<n){
            
            int x=nums[i];
            while(x > 0){
                vec.push_back(nums[i+1]);
                x--;
            }
            i=i+2;
        }
        return vec;
    }
};
