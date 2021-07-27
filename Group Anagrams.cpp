class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<vector<int>,vector<string>> anagram;
        for(string st : strs){
            vector<int> count(256,0);
            for(char ch : st){
                int indx=ch;
                count[ch]++;
            }
            anagram[count].push_back(st);
        }
        vector<vector<string>> res;
        for(auto it : anagram){
            res.push_back(it.second);
        }
        return res;
    }
};
