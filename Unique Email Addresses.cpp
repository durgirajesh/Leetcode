class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> vec;
        for(string str : emails){
            string email; int i=0;
            bool flag=false;
            while(i < str.length()){
                if(!flag && str[i]=='.'){
                    i++;
                }
                if(!flag && str[i]=='+'){
                    while(str[i]!='@'){
                        i++;
                    }
                }
                if(str[i]=='@'){
                    flag=true;
                }
                email+=str[i];
                i++;
            }
            vec.insert(email);
        }
        return vec.size();
    }
};
