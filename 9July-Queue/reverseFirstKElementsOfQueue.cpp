class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        stack<int> st;
        
        int n = q.size();
        
        if(n < k) return q;
        
        
        // pop el. from queue and push them into the stack (k times)
        for(int i=0; i<k; i++){
            int el = q.front();
            q.pop();
            
            st.push(el);
        }
        
        // pop el. from stack and push them into the queue
        while(!st.empty()){
            int el = st.top();
            st.pop();
            
            q.push(el);
        }
        
        // pop el. from front of queue and push them into the queue (N-K times)
        for(int i=0; i<n-k; i++){
            int el = q.front();
            q.pop();
            
            q.push(el);
        }
        
        return q;
    }
};
