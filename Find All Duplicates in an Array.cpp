class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int indx;
        for(int i=0;i<nums.size();i++){
            indx=abs(nums[i])-1;
            if(nums[indx] > 0){
                nums[indx]*=-1;
            }
            else{
                ans.push_back(abs(nums[i]));
            }
        }
        return ans;
    }
};
