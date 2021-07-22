class Solution {
public:
    string freqAlphabets(string s) {
        
        int l=s.length();
        string res;
        for(int i=0;i<l;i++){
            string str;
            if((i+2)<s.length() && s[i+2]=='#'){
                while(s[i]!='#'){
                    str+=s[i];
                    i++;
                }
            }
            else{
                str+=s[i];
            }
            int num=atoi(str.c_str());
            int k=96+num;
            res.push_back((char)k); 
        }
        return res;
    }
};
