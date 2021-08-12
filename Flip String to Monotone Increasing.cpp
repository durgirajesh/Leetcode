class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cnt1=0, cnt2=0, l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]=='0'){
                cnt1++;
            }
            else{
                cnt2++;
            }
            cnt1=min(cnt1,cnt2);
        }
        return cnt1;
    }
};
