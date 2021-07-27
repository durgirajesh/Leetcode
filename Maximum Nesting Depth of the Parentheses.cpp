class Solution {
public:
    int maxDepth(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]==')'){
                str+=s[i];
            }
        }
        int cnt=0, ans=0;
        for(int j=0;j<str.length();j++){
            if(str[j]=='('){
                cnt++;
            }
            else{
                ans=max(ans,cnt);
                cnt--;
            }
        }
        return ans;
    }
};

