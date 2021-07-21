class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        bool myarr[26]={false};
        int l=sentence.length();
        for(int i=0;i<l;i++){
            int x='z'-sentence[i];
            if(!myarr[x]){
                myarr[x]=true;
            }
        }
        
        for(int i=0;i<26;i++){
            if(!myarr[i]){
                return false;
            }
        }
        return true;
    }
};
