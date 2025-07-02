class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int pre = 0, maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            pre += nums[i];
            maxi = max(maxi, pre);

            if (pre < 0) pre = 0;
        }

        return maxi;
    }
};
