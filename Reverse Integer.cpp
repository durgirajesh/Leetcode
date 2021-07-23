class Solution {
public:
    int reverse(int x) {
        bool flag=true;
        if(x<0){
            flag=false;
        }
        
        long int rev=0;
        int n=abs(x);
        while(n>0){
            int q=n%10;
            if(rev*10 > INT_MAX){
                return 0;
            }
            rev = (rev*10) + q;
            n=n/10;
        }
        
        return (flag ? rev : -rev);
    }
};
