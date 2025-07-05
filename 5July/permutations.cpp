class Solution {
public:
    void f(vector<int>& nums, int idx, vector<vector<int>>& ans){
    // base case
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    
    // recursive case
    
    for(int j=idx; j<nums.size(); j++){
        swap(nums[idx], nums[j]);
        f(nums, idx+1, ans);
         swap(nums[idx], nums[j]); // backtracking to get og config. back
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        f(nums, 0, ans);
        return ans;
    }
};
