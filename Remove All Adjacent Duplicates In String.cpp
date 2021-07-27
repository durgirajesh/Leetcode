class Solution {
public:
    string removeDuplicates(string s) {
        
        int i=1;
        stack<char> st;
        st.push(s[0]);
        
        while(i<s.length()){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        string str;
        if(!st.empty()){
            while(!st.empty()){
                char ch=st.top();
                str+=ch;
                st.pop();
            }
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
