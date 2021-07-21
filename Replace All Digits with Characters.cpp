class Solution {
public:
    string replaceDigits(string s) {
        
        string str="abcdefghijklmnopqrstuvwxyz";
        string res;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                res.push_back(s[i]);
                continue;
            }
            else{
                string st;
                while(s[i]>='0' && s[i]<='9'){
                    st+=s[i];
                    i++;
                }
                int n=atoi(st.c_str());
                st=""; i--;
                char c=s[i-1];
                int k = str.find(c)+n;
                res.push_back(str[k]);
            }
        }
        return res;
    }
};
