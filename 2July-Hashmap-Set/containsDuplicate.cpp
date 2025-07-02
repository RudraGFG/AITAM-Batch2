// approach 1 using map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        // fill values in map
        for(int el : nums) mp[el]++;

        // check 
        for(pair<int,int> p: mp){
            if(p.second > 1) return true;
        }

        return false;
    }
};

// approach 2 using Set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int i : nums){
            // if already present then it is a duplicate
            if(st.find(i) != st.end()) return true;
            else st.insert(i); // its coming for the first time, so store it in the set
        }

        return false;
    }
};
