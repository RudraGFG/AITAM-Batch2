class Solution {
public:
    int f(int i, vector<int>& arr, vector<int>& dp){
        // base case
        if(i >= arr.size()) return 0;

        // lookup
        if(dp[i] != -1) return dp[i];

        // recursive case

        // rob
        int rob = arr[i] + f(i+2, arr, dp);

        // not rob
        int notRob = f(i+1, arr, dp);

        return dp[i] =  max(rob, notRob);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n+1, -1);

        int ans = f(0, nums, dp);

        return ans;
    }
};
