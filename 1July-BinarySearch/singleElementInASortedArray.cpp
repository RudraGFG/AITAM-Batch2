class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
          int low = 1, high = arr.size()-2;
          int n = arr.size();

          if(arr.size() == 1) return arr[0];

          if(arr[0] != arr[1]) return arr[0];

          if(arr[n-1] != arr[n-2]) return arr[n-1];
    
    while(low <= high){
        int mid = (low+high)/2;
        
        if(arr[mid] != arr[mid-1] and arr[mid] != arr[mid+1]){
            return arr[mid];
        }
        
        // check if middle is even or odd
        
        if(mid % 2 == 0){
            // even
            
            if(arr[mid] == arr[mid+1]) low=mid+1;
            else high=mid-1;
        }
        
        if(mid % 2 == 1){
            // odd
            
            if(arr[mid] == arr[mid-1]) low=mid+1;
            else high=mid-1;
        }
    }

    return -1;
    }
};
