class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int i=0,j=0;
        while(i<word1.length() && j<word2.length()){
            str.push_back(word1[i]);
            str.push_back(word2[j]);
            i++; j++;
        }
        if(word1.length()>word2.length()){
            for(int k=i;k<word1.length();k++){
                str+=word1[k];
            }
        }
        else{
            for(int k=j;k<word2.length();k++){
                str+=word2[k];
            }
        }
        return str;
    }
};
