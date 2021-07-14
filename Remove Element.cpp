class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        
        int i=0, j=0;
        
        while(j<n)
        {
            if(nums[j]==val){
                j++;
            }
            else{
                nums[i]=nums[j];
                i++;
                j++;
            }
        }
        
        return i;
    }
};
