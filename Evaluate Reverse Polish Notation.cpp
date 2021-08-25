class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        int n=tokens.size();
        
        for(string str : tokens){
            if(str=="+" || str=="-" || str=="*" || str=="/"){
                int num1, num2;
                if(!st.empty()){
                num1 = st.top();
                st.pop();
                }
                if(!st.empty()){
                    num2 = st.top();
                    st.pop();
                }
                long result = 0;
                char ch = str[0];
                switch(ch){
                    case '+' :
                        result = num2 + num1;
                        break;
                    case '-' :
                        result = num2 - num1;
                        break;
                    case '/' :
                        result = num2 / num1;
                        break;
                    case '*' :
                        result = num2*num1;
                        break;
                }
                st.push(result);
            }
            else{
                int n=atoi(str.c_str());
                st.push(n);
            }
        }
        return st.top();
    }
};
