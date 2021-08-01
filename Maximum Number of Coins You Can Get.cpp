class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(),piles.end(), greater<int>());
        vector<int> vec; int lastindx=piles.size()-1;
        
        for(int i=0;i<piles.size();i+=2){
            vec.push_back(piles[i]); vec.push_back(piles[i+1]);
            vec.push_back(piles[lastindx]-1); lastindx--;
            
            if(i+1==lastindx){
                break;
            }
        }
        int maxcoins=0;
        for(int i=1;i<vec.size();i+=3){
            maxcoins+=vec[i];
        }
        return maxcoins;
    }
};
