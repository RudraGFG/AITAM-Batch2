class Solution {
public:
    static bool myCustom(int a, int b){
        // convert integers into string

        string first = to_string(a);
        string second = to_string(b);

        if(first+second > second+first) return true;
        else return false;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), myCustom);

        if(nums[0] == 0) return "0";

        string ans = "";
        for(int i : nums){
            ans += to_string(i);
        }

        return ans;
    }
};
