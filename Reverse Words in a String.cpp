class Solution {
public:
    string reverseWords(string st) {
        string s;
        for(int i=0;i<st.length();i++){
            if(st[i]==' '){
                continue;
            }
            while(i<st.length() && st[i]!=' '){
                s+=st[i];
                i++;
            }
            s.append(" ");
        }
        int j=s.length()-1;
        while(j<s.length() && s[j]==' '){
            s.pop_back();
            j--;
        }
        string res,str;
        for(int i=s.length()-1;i>=0;i--){
            while(i<s.length() && s[i]!=' '){
                str+=s[i];
                i--;
            }
            reverse(str.begin(),str.end());
            res+=str;
            str.clear(); res.append(" ");
        }
        res.pop_back();
        return res;
    }
};
