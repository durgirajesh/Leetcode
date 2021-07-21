class Solution {
public:
    int balancedStringSplit(string s) {
        
        int l=s.length();
        int cnt=0, sum=0;
        
        for(int i=0;i<l;i++){
            if(s[i]=='L'){
                cnt++;
            }
            else if(s[i]=='R'){
                cnt--;
            }
            
            if(cnt==0){
                sum++;
            }
        }
        return sum;
    }
};
