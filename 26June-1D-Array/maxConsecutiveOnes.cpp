class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int consecutive = 0;

        for (int num : nums){
            if (num == 1){
                consecutive++;
                ans = max(ans, consecutive);
            }
            else consecutive = 0;
        }

        return ans;
    }
};
