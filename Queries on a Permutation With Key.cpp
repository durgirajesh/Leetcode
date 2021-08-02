class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;
        vector<int> P(m);
        for(int i=0;i<m;i++){
            P[i]=i+1;
        }
            
        for(int i=0;i<queries.size();i++){
            int x=queries[i];
            auto it = find(P.begin(),P.end(),x);
            int indx = (it!=P.end()) ? it-P.begin() : -1;
            
            vector<int> vec;
            vec.push_back(P[indx]);
            for(int i=0;i<P.size();i++){
                if(i==indx){
                    continue;
                }
                vec.push_back(P[i]);
            }
            P=vec;
            ans.push_back(indx);
        }
        return ans;
    }
};
