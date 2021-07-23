class Solution {
public:
    int myAtoi(string s) {
        
        bool flag=true, sign=false, num=false;
        string str;
        int cnt=0;
        
        for(int i=0;i<s.length();i++){
            while(s[i]==' '){
                i++;
            }
            if(isalpha(s[i]) || s[i]=='.' || num || sign){
                break;
            }
            if(s[i]=='-'){
                flag=false;
                cnt++; i++;
            }
            else if(s[i]=='+'){
                cnt++; i++;
            }
            
            sign=true;
            
            if(cnt>1){
                return 0;
            }
            
            while(s[i]>='0' && s[i]<='9'){
                str+=s[i];
                i++;
                num=true;
            }i--;
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
