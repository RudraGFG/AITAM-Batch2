class Solution {
public:
    bool isEvenDigitNumber(int n) {
        int cnt = 0;
        while (n > 0){
            n = n / 10;
            cnt++;
        }
        
        if(cnt % 2 == 0) return true;
        else return false;
    }
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        
        for (int num : nums){
            if(isEvenDigitNumber(num) == true) ans++;
        }

        return ans;
    }
};
