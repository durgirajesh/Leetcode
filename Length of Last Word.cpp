class Solution {
public:
    int lengthOfLastWord(string s) {
        
        if(s.empty())
            return 0;

        if(s.length()==1 && s[0]==' ')
            return 0;
        
        int cnt=0, space=0;
        
        for(int i=(s.length()-1);i>=0;i--){
            if(s[i]==' ')
                space++;
            else
                break;
        }
        
        for(int k=(s.length()-space-1);k>=0;k--){
            
            if(s[k]!=' ')
                cnt++;
            else
                break;
        }

        return cnt;
    }
};
