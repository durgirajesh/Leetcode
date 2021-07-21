class Solution {
public:
    string interpret(string command) {
        
        int l = command.length();
        string st;
        for(int i=0;i<l;i++){
            
            while(command[i]=='G'){
                st.append("G");
                i++;
            }
            
            if(command[i]=='(' && command[i+1]==')'){
                st.append("o");
                i++;
            }
            if(command[i]=='(' && command[i+1]=='a'){
                st.append("al");
                    i++;
            }
        }
        return st;
    }
};
