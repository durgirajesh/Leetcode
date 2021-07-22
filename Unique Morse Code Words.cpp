class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string code[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> res;
        for(int i=0;i<words.size();i++){
            string str;
            str=words[i];
            string cur;
            for(char ch : str){
                cur+=code[ch-97];
            }
            res.insert(cur);
        }
        return res.size();
    }
};
