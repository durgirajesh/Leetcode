class Solution {
public:
    int numDifferentIntegers(string s) {
        
        set<string> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                string str;
                while(s[i]=='0'){
                    i++;
                }
                while(isdigit(s[i])){
                    str+=s[i];
                    i++;
                }i--;
                st.insert(str);
            }
        }
        return st.size();
    }
};
