class Solution {
public:
    int firstPos(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }

        return ans;
    }
    int lastPos(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fp = firstPos(nums, target);
        int lp = lastPos(nums, target);

        return {fp, lp};
    }
};
