class Solution {
public:
    int bsearch(vector<int> nums,int l,int h,int target){
        if(l>h){
            return l;
        }
        int mid=(l+h)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid] > target){
            return bsearch(nums,l,mid-1,target);
        }
        else{
            return bsearch(nums,mid+1,h,target);
        }
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int x = bsearch(nums,0,nums.size()-1,target);
        return x;
    }
};
