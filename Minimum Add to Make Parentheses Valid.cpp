class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int l=s.length();
        stack<int> st;
        int cnt=0;
        
        for(int i=0;i<l;i++){
            

            if(s[i]=='('){
                st.push(s[i]);
                cnt++;
            }
            
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    cnt--;    
                }else{
                    st.push(s[i]);
                    cnt++;
                }
                
            }

        }
        return cnt;
    }
};
