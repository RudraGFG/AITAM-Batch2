// approach 1 using map
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for(char ch : s) mp[ch]++;
        for(int i=0; i<s.size(); i++){
            
            if(mp[s[i]] == 1) return i;
        }

        return -1;
    }
};

// approach 2 using frequency array
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        for(char ch : s) freq[ch - 'a']++;
        for(int i=0; i<s.size(); i++) if(freq[s[i] - 'a'] == 1) return i;
        return -1;
    }
};
