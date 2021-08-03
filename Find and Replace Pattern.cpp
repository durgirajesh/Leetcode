class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        
        for(int i=0;i<words.size();i++){
            int flag=0;
            unordered_map<char,char> mp1;
            unordered_map<char,char> mp2;
            for(int j=0;j<pattern.length();j++){
                if(mp1[pattern[j]] && mp1[pattern[j]]!=words[i][j]){
                    flag=1;
                    break;
                }
                else if(mp2[words[i][j]] && mp2[words[i][j]]!=pattern[j]){
                    flag=1;
                    break;
                }
                else{
                    mp1[pattern[j]]=words[i][j];
                    mp2[words[i][j]]=pattern[j];
                }
            }
            if(flag==0){
                ans.push_back(words[i]);
            }
        }
        
        return ans;
    }
};
