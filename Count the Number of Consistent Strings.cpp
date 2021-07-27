class Solution {
public:
    
    bool search(char c, string allowed){
        for(int i=0;i<allowed.length();i++){
            if(allowed[i]==c){
                return true;
            }
        }
        return false;
    }
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int cnt=0; bool flag=true;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            for(char ch : str){
                if(!search(ch,allowed)){
                    flag=false;
                }
            }
            if(flag){
                cnt++;
            }
            flag=true;
        }
        
        
        return cnt;
    }
};
