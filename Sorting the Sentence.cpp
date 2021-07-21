class Solution {
public:
    string sortSentence(string s) {
        
        int l=s.length();
        string str;
        vector<string> vec;
        vector<int> num;
        
        for(int i=0;i<l;i++){
            
            if(s[i]==' '){
                str="";
                continue;
            }
            else if(isdigit(s[i])){
                string st;
                while(s[i] >= '0' && s[i] <= '9'){
                    st+=s[i];
                    i++;
                }
                i--;
                int number=atoi(st.c_str());
                st="";
                num.push_back(number);
                vec.push_back(str);
            }
            else{
                str+=s[i];
            }
        }
       map<int,string> mp;
        for(int i=0;i<num.size();i++){
            mp.insert(make_pair(num[i],vec[i]));
        }
        string st;
        map<int,string> :: iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            st+=it->second;
            st.append(" ");
        }
        st.pop_back();
        return st;
    }
};
