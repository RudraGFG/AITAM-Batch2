class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // edge cases: check if the peak is at the boundary
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return n - 1;

        int low = 1, high = n - 2;

        while (low <= high) {
            int mid = (low + high) / 2;

            // check if mid is a peak
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;

            // increasing slope: move right
            else if (nums[mid] < nums[mid + 1])
                low = mid + 1;

            // decreasing slope: move left
            else
                high = mid - 1;
        }

        return -1;
    }
};
