class Solution {
  public:
    bool dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& vis){
        vis[node]=true;
        
        // run dfs on unvisited ngb;
        for(int ngb : adj[node]){
            if(vis[ngb] == false){
                bool ans =  dfs(ngb, node, adj, vis);
                
                if(ans == true) return true;
            }
            else{
                if(ngb != parent) return true;
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        
        for(vector<int> edge : edges){
            int u = edge[0], v = edge[1];
            
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> vis(V, false);
        
        for(int i=0; i<V; i++){
            if(vis[i] == false){
               bool ans = dfs(i, -1, adj, vis);
               
               if(ans == true) return true;
            }
        }
        
        return false;
    }
};
