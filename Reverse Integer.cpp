class Solution {
public:
    int reverse(int x) {
        
        bool isneg=false;
        
        
        ifx<0){
            isneg=true;
            x=-x;
        }
        
        long rev=0;
        int q;
        while(abs(x)>0){
            q=x%10;
            rev = (rev*10) + q;
            x=x/10;
        }
        
        if(rev > INT_MAX){
            return 0;
        }
        if(isneg){
            rev=-rev;
        }
        return rev;
    }
};
