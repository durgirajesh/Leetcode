class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0){
            return false;
        }
        
        int tp=x;

        int q;
        long rev=0;
        
        while(abs(x)!=0){
            
            q=x%10;
            rev = rev*10 + q;
            x/=10;
        }
        return (tp==rev);
    }
};
