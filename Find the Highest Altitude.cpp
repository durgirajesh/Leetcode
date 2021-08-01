class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans; ans.push_back(0);
        int prev=0, max=0;
        for(int i=0;i<gain.size();i++){
            int x = gain[i]+prev;
            ans.push_back(x);
            prev=x;
            if(x>max){
                max=x;
            }
        }
        return max;
    }
};
