class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size(), count = 0;

        int l = 0, r = 0;
        int wsum = 0;

        // find sum of first k size window/subarray
        while(r < k){
            wsum += arr[r];
            r++;
        }

        // check for this window manually, rest do with sliding window
        if(wsum >= threshold*k) count++;

        // slide and track
        while(r < n){
            wsum += arr[r]; // expanding the window
            wsum -= arr[l]; // contracting the window

            if(wsum >= threshold*k) count++; // checking if window sum satisfies the given condition

            r++;
            l++;
        }

        return count;
    }
};
