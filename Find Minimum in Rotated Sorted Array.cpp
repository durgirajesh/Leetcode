class Solution {
public:
    int findpivot(vector<int>& nums,int l,int r) {
        if(l>r){
            return nums[0];
        }
        if(l==r){
            return nums[l];
        }
        int mid=(l+r)/2;
        if(mid < r && nums[mid]>nums[mid+1]){
            return nums[mid+1];
        }
        if(mid > l && nums[mid-1] > nums[mid]){
            return nums[mid];
        }
        if(nums[r]>=nums[mid]){
            return findpivot(nums,l,mid-1);
        }
        return findpivot(nums,mid+1,r);
    }
    int findMin(vector<int>& nums) {
        return findpivot(nums,0,nums.size()-1);
    }
};
