class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();
        
        vector<int> ans;
        
        vector<bool> vis(V, false);
        queue<int> q;
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()){
            int node = q.front();
             ans.push_back(node);
            
            q.pop();
            
          
           
            for(int ngb : adj[node]){
                if(vis[ngb] == false){
                    vis[ngb] = true;
                    q.push(ngb);
                } 
            }
        }
        
        return ans;
    }
};
