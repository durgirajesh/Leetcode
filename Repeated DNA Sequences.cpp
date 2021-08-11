class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string,int> ump;
        for(int i=0;(i+9)<s.length();i++){
            string tmp = s.substr(i,10);
            ump[tmp]++;
        }
        for(auto it : ump){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
