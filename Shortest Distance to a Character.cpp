class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.length(),0);
        bool flag=false; int indx=0; 
        int dist=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                flag=true;
                indx=i;
                continue;
            }
            int j=i;
            while(j<s.length() && s[j]!=c){
                j++;
            }
            ans[i] = s[j]==c ? abs(i-j) : abs(indx-i);
            if(flag){
                dist=abs(indx-i);
                ans[i] = min(ans[i],dist);
            }
        }
        return ans;
    }
};
