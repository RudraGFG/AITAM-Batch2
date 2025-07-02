class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp; // key: sorted string, value: collection of og strings

        for(string i : strs){
            string og = i; // og string
            sort(i.begin(), i.end()); // sorted string

            mp[i].push_back(og);
        }

        vector<vector<string>> ans;

        for(pair<string, vector<string>> p : mp){
            vector<string> coll = p.second;

            ans.push_back(coll);
        }

        return ans;
    }
};
