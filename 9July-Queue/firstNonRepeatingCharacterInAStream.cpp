class Solution {
  public:
    string FirstNonRepeating(string &s) {
        unordered_map<char,int> mp;
        queue<char> q;
        string ans;
        
        for(char ch : s){
            // increase frequency of character
            mp[ch]++;
            
            // push character into the queue
            q.push(ch);
            
            
            // pop elements with freq > 1
            while(!q.empty()){
                char front = q.front();
                
                if(mp[front] > 1) q.pop();
                else if(mp[front] == 1){
                    ans.push_back(front);
                    break;
                }
                
            }
            
            // if queue becomes empty that means there was no non-rep char
            if(q.empty()) ans.push_back('#');
        }
        
        return ans;
    }
};
