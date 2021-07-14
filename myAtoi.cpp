class Solution {
public:
    int myAtoi(string s) {
        
        bool flag=true;
        string str;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            
            if(isalpha(s[i]) || s[i]=='.')
                break;
            
            while(s[i]==' ')
                i++;
            
            if(s[i]=='-'){
                flag=false;
                cnt++;
            }
            else if(s[i]=='+'){
                cnt++;
            }
            
            if(cnt>1){
                return 0;
            }
            
            if(s[i]>='0' && s[i]<='9'){
                str+=s[i];
            }
        }	
        
        stringstream in;
        in<<str;
        long sum=0;
        in>>sum;
        
        sum=(flag ? sum : -sum);
        
        if(sum > INT_MAX)
	     return INT_MAX;
	else if(sum < INT_MIN)
            return INT_MIN;
        
        else
            return sum;
    }
};
