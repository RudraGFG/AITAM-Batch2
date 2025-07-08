class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<int> st;
        
        int n = arr.size();
        vector<int> ans(n, 0);
        
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
            
            int x;
            
            if(st.empty()) x = -1;
            else x = st.top();
            
            ans[i] = i-x;
            
            st.push(i);
        }
        
        return ans;
    }
};
