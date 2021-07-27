class Solution {
public:
    string reverseWords(string s) {
        
        int l=s.length();
        stack<char> st;
        string res;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                while(!st.empty()){
                    res+=st.top();
                    st.pop();
                }
                res.push_back(s[i]);
            }
            else{
                st.push(s[i]);
            }
        }
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
