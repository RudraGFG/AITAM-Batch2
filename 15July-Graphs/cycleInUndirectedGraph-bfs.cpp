class Solution {
  public:
    bool bfs(int node, vector<vector<int>>& adj, vector<bool>& vis){
        queue<pair<int,int>> q; // first: node, second: parent
        q.push({node, -1});
        vis[node] = true;
        
        
        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            
            int node = p.first;
            int parent = p.second;
            
            for(int ngb : adj[node]){
                if(vis[ngb] == false){
                    q.push({ngb,node});
                    vis[ngb] = true;
                }
                else{
                    if(ngb != parent) return true;
                }
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
               bool ans = bfs(i, adj, vis);
               
               if(ans == true) return true;
            }
        }
        
        return false;
    }
};
