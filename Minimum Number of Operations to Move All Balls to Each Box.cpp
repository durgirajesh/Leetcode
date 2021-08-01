class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> res;
        for(int i=0;i<boxes.size();i++){
            int cnt=0;int j=0;
            while(j<boxes.size()){
                if(boxes[j]=='1'){
                    cnt+=abs(j-i);
                }
                j++;
            }
            res.push_back(cnt);
        }
        return res;
    }
};
