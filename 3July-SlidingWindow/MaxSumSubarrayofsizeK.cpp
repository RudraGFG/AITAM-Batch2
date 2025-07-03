class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        
        int l = 0, r = 0;
        
        int wsum = 0;
        
        // find sum of first k size window/subarray
        while(r < k){
            wsum += arr[r]; // wsum = wsum + arr[r]
            r++;
        }
        
        // right was already increased that's why while loop terminated
        
        // slide and track
        int maxi = wsum;
        
        while(r < n){
            
            wsum += arr[r]; // expanding the window
            wsum -= arr[l]; // contracting the window
            
            r++;
            l++;
            
            maxi = max(maxi, wsum);
        }
        
        return maxi;
    }
};
