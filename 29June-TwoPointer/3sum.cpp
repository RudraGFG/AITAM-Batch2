class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // sort the array
        
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        for(int i=0; i<=n-3; i++){
            int newTarget = target - arr[i];
            
            
            int j = i+1, k = n-1;
            
            while(j < k){
                int sum = arr[j] + arr[k];
                
                if(sum > newTarget) k--;
                else if(sum < newTarget) j++;
                else return true;
            }
        }
        
        
        return false;
        
    }
};
