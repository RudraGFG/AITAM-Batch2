// approach 1 using 2 frequency arrays
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        
        int n1 = s1.size(), n2 = s2.size();
        
        vector<int> f1(26, 0), f2(26, 0);
        
        // mapping of s1
        
        for(int i=0; i<n1; i++){
            int idx= s1[i]-'a';
       f1[idx]++;
        }
        
        
        // mapping of s2
        
        for(int i=0; i<n2; i++){
            int idx= s2[i]-'a';
       f2[idx]++;
        }
        
        // checking equality of both arrays
        
        for(int i=0; i<26; i++){
            if(f1[i] != f2[i]) return false;
        }
        
        return true;
    }
};

// approach 2 using only 1 frequency array
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        
        int n1 = s1.size(), n2 = s2.size();
        
        vector<int> f(26, 0);
        
        // mapping of s1
        
        for(int i=0; i<n1; i++){
            int idx= s1[i]-'a';
            f[idx]++;
        }
        
        
        // mapping of s2
        
        for(int i=0; i<n2; i++){
            int idx= s2[i]-'a';
            f[idx]--;
        }
        
        // check
        for(int i=0; i<26; i++){
            if(f[i] !=0) return false;
        }
        
        return true;
    }
};
