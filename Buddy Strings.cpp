class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.length()!=goal.length() || s.length() < 2){
            return false;
        }
        
        if(s.compare(goal)==0){
            set<char> st(s.begin(),s.end());
            if(s.size()!=st.size()){
                return true;
            }
            return false;
        }
        
        bool flag=false; int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=goal[i]){
                if(flag){
                    swap(s[j],s[i]);
                    break;
                }
                j=i;
                flag=true;
            }
        }
        return (s.compare(goal)==0);
    }
};
