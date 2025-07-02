class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp; // key: element, value: index of that element

        for(int i=0; i<nums.size(); i++){
            // check if element is duplicate
            if(mp.find(nums[i]) != mp.end()){
                // check abs(prv - curr) <= k

                int curr = i;
                int prv = mp[nums[i]];

                if(abs(prv-curr) <= k) return true;
            }

            // store index corresponding to the element
            mp[nums[i]] = i;
        }


        return false;
    }
};
