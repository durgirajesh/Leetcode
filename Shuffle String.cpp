class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int l=s.length();
        string str=s;
        
        for(int i=0;i<l;i++){
            s[indices[i]]=str[i];
        }
        return s;
    }
};
