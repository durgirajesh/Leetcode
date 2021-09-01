class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        int n = arr.size();
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>> p;
        for(auto it : mp){
            p.push(make_pair(it.second,it.first));
        }
        set<int> s;
        int k=n/2;
        while(n>k && !p.empty()){
            s.insert(p.top().second);
            n-=p.top().first;
            p.pop();
        }
        return s.size();
    }
};
