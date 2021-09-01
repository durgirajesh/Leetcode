class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<int> st;
        int n = temperatures.size();
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            res[i] = (st.empty()) ? 0 : st.top()-i;
            st.push(i);
        }
        return res;
    }
};
