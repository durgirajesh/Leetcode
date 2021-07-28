class Solution {
public:
    int minSteps(string s, string t) {
        
        if(s.compare(t)==0 || s.length()!=t.length()){
            return 0;
        }
        
        vector<int> freq(256,0);
        int cnt=0;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        
        for(int i=0;i<256;i++){
            if(freq[i]>0){
                cnt+=freq[i];
            }
        }
        return cnt;
    }
};
