class Solution {
public:
    string simplifyPath(string path) {
        
        int l=path.length();
        
        stack<char> st;
        
        for(int i=0;i<l-1;i++){
            
            if(path[i]=='/' && path[i+1]!='/'){
                
                st.push(path[i]);
            }
            
            if(path[i]!='/' && path[i]!='.'){
                
                st.push(path[i]);
            }
            
            if(path[i]=='.'){
                
                while(!st.empty()){
                    st.pop();
                }
               
            }
        }

        if(path[l-1]!='/' && path[l-1]!='.'){
            
            st.push(path[l-1]);
        }
        
        stack<char> st2;
        
        while(!st.empty()){
            
            st2.push(st.top());
            st.pop();
        }
        
        string str;
        while(!st2.empty()){
            str+=st2.top();
            st2.pop();
        }
        return str;
    }
};
