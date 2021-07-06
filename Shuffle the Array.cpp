class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int k=2*n;
        vector<int>vec(k);
        int i=0,j=n,q=0;
        
        for(int i=0;i<k;i++){ 
            vec[i]=nums[q];
            vec[i+1]=nums[j];
            i++;j++;q++;
        }
        
        return vec;
    }
};
