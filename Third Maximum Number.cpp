class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n=nums.size();
        
        priority_queue<int> maxheap;
        for(int i=0;i<n;i++){
            maxheap.push(nums[i]);
        }
        
        vector<int> vec;
        int prev=maxheap.top();
        vec.push_back(prev);
        maxheap.pop();
        
        while(!maxheap.empty()){
            
            if(maxheap.top()!=prev){
                vec.push_back(maxheap.top());
            }
            prev=maxheap.top();
            maxheap.pop();
        }
        
        if(vec.size() < 3){
            return vec[0];
        }
        else{
            return vec[2];
        }
    }
};
