class Solution {
  public:
    int fTopDown(int n, vector<int>& dp){
        // base case
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        // lookup: dont make recursive call if already calculated
        if(dp[n] != -1) return dp[n];
        
        // recursive case
        int a = fTopDown(n-1, dp), b = fTopDown(n-2, dp);
        
        return dp[n] = a + b; // store in dp table and return
    }
    int nthFibonacci(int n) {
        vector<int> dp(n+1, -1);
        
        int ans = fTopDown(n, dp);
        
        return ans;
    }
};
