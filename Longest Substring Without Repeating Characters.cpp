class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.empty()){
            return 0;
        }
        
        set<char> st;
        int maxs=0,i=0,j=0;
        while(j<s.length()){
            if(st.count(s[j])==0){
                st.insert(s[j]);
                maxs=max(maxs,(int)st.size());
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxs;
    }
};
