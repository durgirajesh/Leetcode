class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int a=INT_MAX, b=INT_MAX;
        for(int i=0;i<ops.size();i++){
            a=min(a,ops[i][0]);
            b=min(b,ops[i][1]);
        }
        if(a==INT_MAX || b==INT_MAX){
            return m*n;
        }
        return a*b;
    }
};
