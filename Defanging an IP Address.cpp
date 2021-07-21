class Solution {
public:
    string defangIPaddr(string address) {
        
        string st;
        int l=address.length();
        for(int i=0;i<l;i++){
            if(address[i]=='.'){
                st.append("[.]");
                i++;
            }
            st+=address[i];
        }
        return st;
    }
};
