class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int i=0,j=0,num1=0,num2=0;
        while(i<firstWord.length()){
            num1=num1*10+(firstWord[i]-97);
            i++;
        }
        while(j<secondWord.length()){
            num2=num2*10 + (secondWord[j]-97);
            j++;
        };
        int res=0;
        for(int i=0;i<targetWord.length();i++){
            res=res*10 + (targetWord[i]-97);
        }
        return (num1+num2==res);
    }
};
