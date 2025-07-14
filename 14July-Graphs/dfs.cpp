class Solution {
  public:
    void dfs(int node, vector<bool>& vis, vector<vector<int>>& adj, vector<int>& ans){
        // visit the node
        vis[node] = true;
        ans.push_back(node);
        
        // to run dfs on unvisited ngb of node
        for(int ngb : adj[node]){
            if(vis[ngb] == false) dfs(ngb, vis, adj, ans);
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        
        vector<bool> vis(V, false);
        vector<int> ans;
        
        for(int i=0; i<V; i++){
            if(vis[i] == false) dfs(i, vis, adj, ans);
        }
        
        return ans;
    }
};
