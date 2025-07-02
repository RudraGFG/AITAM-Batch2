class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, n = height.size(), i = 0, j = n-1;

        while(i < j){
            int bre = j - i;
            int len = min(height[i], height[j]);
            int area = bre*len;

            ans = max(ans, area);

            if(height[i] < height[j]) i++;
            else j--;
        }

        return ans;
    }
};
