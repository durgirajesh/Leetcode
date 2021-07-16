class Solution {
public:
    
    void Maxheap(int arr[], int i, int N){
        
        int largest=i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < N && arr[left] > arr[i])
            largest=left;
        if(right < N && arr[right] > arr[largest])
            largest=right;
        
        if(largest!=i){
            int tmp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = tmp;
            Maxheap(arr,largest,N);
        }
    }

    void heapify(int ar[], int N)
    {
        for(int i=N/2;i>=0;i--){
            Maxheap(ar,i,N);
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        
        int arr[nums.size()];
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];
        }
        int N=nums.size();
        int tmp=0;
        
        for(int i=0;i<k;i++){
            heapify(arr,N);
            tmp=arr[0];
            arr[0]=arr[N-1];
            N=N-1;
        }
        return tmp;
        
    }
};
