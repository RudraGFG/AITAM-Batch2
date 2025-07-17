class Solution {
  public:
    int nthFibonacci(int n) {
        vector<int> dp(n+1, -1);
        
        // start from the base case and go towards bigger problem
        dp[0] = 0;
        dp[1] = 1;
        
        // fill the dp table
        for(int i=2; i<=n; i++){
            int a = dp[i-1];
            int b = dp[i-2];
            
            dp[i] = a + b;
        }
        
        return dp[n];
    }
};
