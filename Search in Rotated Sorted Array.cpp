class Solution {
public:
    int bsearch(vector<int> nums,int l,int r,int k) {
        if(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==k){
                return mid;
            }
            if(nums[mid]>k){
                return bsearch(nums,l,mid-1,k);
            }
            else{
                return bsearch(nums,mid+1,r,k);
            }
        }
        return -1;
    }
    int findpivot(vector<int> nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return i;
            }
        }
        return -1;
    }
    int pbsearch(vector<int> nums, int k){
        int pi = findpivot(nums);
        if(pi==-1){
            return bsearch(nums,0,nums.size()-1,k);
        }
        else if(nums[pi]==k){
            return pi;
        }
        else if(k >= nums[0]){
            return bsearch(nums,0,pi-1,k);
        }
        return bsearch(nums,pi+1,nums.size()-1,k);
    }
    int search(vector<int>& nums, int target) {
        return pbsearch(nums,target);   
    }
};
