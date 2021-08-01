class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int indx=-1;
        int n=nums.size();
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                indx=i-1;
                break;
            }
        }
        
        if(indx<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[indx]){
                swap(nums[indx],nums[i]);
                reverse(nums.begin()+indx+1,nums.end());
                return;
            }
        }
    }
};
