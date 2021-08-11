class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto it : mp){
            int x = it.second;
            if(x>=2){
                for(int j=0;j<2;j++){
                    ans.push_back(it.first);
                }
            }
            else{
                ans.push_back(it.first);
            }
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};
