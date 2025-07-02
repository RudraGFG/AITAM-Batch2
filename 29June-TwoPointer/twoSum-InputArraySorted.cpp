class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        int n = numbers.size();
        int i = 0, j = n - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];

            if (sum == target) {
                ans = {i + 1, j + 1};
                break;
            }
            else if (sum > target) j--;
            else i++;
        }
        
        return ans;
    }
};
