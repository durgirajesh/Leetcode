class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        
        unordered_map<int,int> mp;
        vector<int> ans;
        priority_queue<pair<int,int>> maxheap;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(auto i:mp){
            maxheap.push(make_pair(i.second,i.first));
        }
        
        while(k--){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return ans;
    }
};
