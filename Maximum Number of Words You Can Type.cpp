class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        int l=text.length(), cnt=0;
        string res; bool flag=true;
        for(int i=0;i<l;i++){
            if(text[i]==' '){
                for(int i=0;i<brokenLetters.length();i++){
                    int x=res.find(brokenLetters[i]);
                    if(x!=-1){
                        flag=false;
                    }
                }
                if(flag){
                    cnt++;
                }
                res="";
                flag=true;
            }
            else{
                res+=text[i];
            }
        }
        
        if(!res.empty()){
            for(int i=0;i<brokenLetters.length();i++){
                int x=res.find(brokenLetters[i]);
                if(x!=-1){
                    flag=false;
                }
            }
            if(flag){
                cnt++;
            }
        }
        return cnt;
    }
};
