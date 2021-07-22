class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> vec;
        string str; int i=0;
        while(k>0 && i<s.length()){
            if(s[i]==' '){
                vec.push_back(str);
                str="";
                k--;
            }
            else{
                str+=s[i];
            }
            i++;
        }
        if(k>0)
            vec.push_back(str);
            str="";
        
        for(int i=0;i<vec.size();i++){
            str+=vec[i];
            str.append(" ");
        }
        str.pop_back();
        return str;
    }
};
