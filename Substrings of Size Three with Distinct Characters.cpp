class Solution {
public:
    int countGoodSubstrings(string s) {
        
        if(s.length()<3){
            return 0;
        }
        
        int cnt=0;
        for(int i=0;i<=s.length()-3;i++){
            int j=i; bool flag=true;
            vector<bool> alpha(26,0);
            string str;
            while(i<s.length() && j<(i+3)){
                if(alpha[s[j]-'a']){
                    flag=false;
                }
                str+=s[j];
                alpha[s[j]-'a']=true;
                j++;
            }
            if(flag){
                cnt++;
            }
        }
        return cnt;
    }
};
