class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        vector<int> ans(k,0);
        unordered_map<int,set<int>> mp;
        for(int i=0;i<logs.size();i++){
            int x=logs[i][0];
            mp[x].insert(logs[i][1]);
        }
        unordered_map<int,int> ump;
        for(auto it : mp){
            ump[it.second.size()]++;
        }
        unordered_map<int,int> ::iterator it;
        for(it=ump.begin();it!=ump.end();it++){
            ans[it->first-1]=it->second;
        }
        return ans;
    }
};
