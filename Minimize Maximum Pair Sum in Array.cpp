class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        map<int,int> mp;
        int k = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            mp.insert(make_pair(nums[i],nums[k]+nums[i]));
            k--;
        }
        int maxi = 0;
        for(auto it : mp){
            if(it.second > maxi){
                maxi=it.second;
            }
        }
        return maxi;
    }
};
