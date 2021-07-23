class Solution {
public:
    string simplifyPath(string path) {
        
        int l=path.length();
        stack<string> vec; string res;
        res.append("/");
        
        for(int i=0;i<l;i++){
            string str;
            
            while(path[i]=='/'){
                i++;
            }
            while(i<path.length() && path[i]!='/'){
                str+=path[i];
                i++;
            }
            
            if(str.compare("..")==0){
                if(!vec.empty()){
                    vec.pop();
                }
            }
            else if(str.compare(".")==0){
                continue;
            }
            
            else if(str.length()!=0){
                vec.push(str);
            }
        }
        
        stack<string> st;
        while(!vec.empty()){
            st.push(vec.top());
            vec.pop();
        }
        
        while(!st.empty()){
            if(st.size()!=1){
                res.append(st.top()+"/");
            }
            else{
                res.append(st.top());
            }         
            st.pop();                 
        }
        return res;
    }
};
