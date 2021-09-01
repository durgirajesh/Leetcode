class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        auto rbegin = arr.rbegin();
        auto rend = arr.rend();
        
        while(rbegin!=rend){
            auto k = max_element(rbegin,rend);
            reverse(k,rend);
            res.push_back(rend-k);
            
            reverse(rbegin,rend);
            res.push_back(rend-rbegin);
            ++rbegin;
            
        }
        return res;
    }
};
