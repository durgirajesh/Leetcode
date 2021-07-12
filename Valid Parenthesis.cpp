class Solution {
public:
    bool isValid(string s) 
    {
        int z=s.length();
        stack<char>sc;
        for(int i=0;i<z;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                sc.push(s[i]);
                cout<<sc.top();
            }
            
            if(s[i]==')' || s[i]==']' || s[i]==']')
            {
                if(sc.empty())
                    return false;
                if(sc.top()=='(' && s[i]==')' || sc.top()=='[' && s[i]==']' || sc.top()=='{' && s[i]=='}'){
                    sc.pop();
                }
                else
                    return 0;
                }
            }
        }
        return(sc.empty());
    }
};
