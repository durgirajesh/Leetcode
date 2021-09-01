class Solution {
public:
    int bsearch(vector<int> nums,int target) {
        int l=0, h=nums.size()-1, pos=nums.size();
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid]>=target){
                pos = mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = bsearch(nums,target);
        int last = bsearch(nums,target+1)-1;
        
        if(first<=last){
            return {first,last};
        }
        return {-1,-1};
    }
};
