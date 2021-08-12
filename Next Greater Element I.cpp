class Solution {
public:
    int check(int x, vector<int> nums2){
        auto it = find(nums2.begin(),nums2.end(),x);
        int indx = it!=nums2.end() ? it-nums2.begin() : -1;
        if(indx!=-1 && indx!=nums2.size()-1){
            for(int j=indx+1;j<nums2.size();j++){
                if(nums2[j] > x){
                    return nums2[j];
                }
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int id = check(nums1[i],nums2);
            ans.push_back(id);
        }
        return ans;
    }
};
