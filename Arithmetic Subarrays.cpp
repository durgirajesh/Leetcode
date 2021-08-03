class Solution {
public:
    bool check(vector<int> vec){
        int common_diff = vec[1]-vec[0];
        for(int i=1;i<vec.size()-1;i++){
            if(vec[i+1] - vec[i] != common_diff){
                return false;
            }
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> vec;
        for(int i=0;i<l.size();i++){
            int x1=l[i]; int x2=r[i];
            vector<int> vt; int k=0;
            for(int j=x1;j<x2+1;j++){
                vt.push_back(nums[j]);
            }
            sort(vt.begin(),vt.end());
            bool flag = check(vt) ? true : false;
            vec.push_back(flag);
        }
        return vec;
    }
};
