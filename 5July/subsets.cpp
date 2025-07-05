class Solution {
public:
void f(vector<int>& arr, int idx, vector<int>& temp, vector<vector<int>>& ans){
    // base case
    if(idx == arr.size()){
        ans.push_back(temp);
        return;
    }
    
    // recursive case
    
    // include the current element
    temp.push_back(arr[idx]);
    f(arr, idx+1, temp, ans);
    temp.pop_back(); // backtracking: getting the original configuration back
    
    // exclude the current element
    
    f(arr, idx+1, temp, ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        f(nums, 0, temp, ans);

        return ans;
    }
};
