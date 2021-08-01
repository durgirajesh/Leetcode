class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])==0){
                mp[nums[i]]=i;
            }
            if(mp.count(target-nums[i])==1 && i!=mp[target-nums[i]]){
                res.push_back(i); res.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return res;
    }
};
