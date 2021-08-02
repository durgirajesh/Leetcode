class Solution {
public:
    
    bool check(vector<int> v1, vector<int> v2){
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
    
    int reinitializePermutation(int n) {
        vector<int> perm;
        int operations = 0;
        for(int i=0;i<n;i++){
            perm.push_back(i);
        }
        
        vector<int> Perm(perm.begin(),perm.end());
        while(operations < n){
            vector<int>arr(perm.size());
            for(int i=0;i<perm.size();i++){
                arr[i] = (i%2==0) ? perm[i/2] : perm[n/2 + (i-1)/2];
            }
            operations++;
            perm=arr;
            if(check(Perm,perm)){
                break;
            }
        }
        return operations;
    }
};
