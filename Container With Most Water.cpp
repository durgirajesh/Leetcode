class Solution {
public:
    int maxArea(vector<int>& a) {
        
        int n=a.size();
        int start=0, end=n-1;
        int Max=0, area=0;
        
        while(end>start){
            
            if(a[start] > a[end]){
                area=a[end]*(end-start);
                end--;
            }
            else{
                area=a[start]*(end-start);
                start++;
            }
            Max=max(Max,area);
        }
        
        return Max;
    }
};
