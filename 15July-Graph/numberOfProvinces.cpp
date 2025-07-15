class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis){
        vis[node] = true;

        // run dfs on unvisited ngb
        for(int ngb : adj[node]){
            if(vis[ngb] == false) dfs(ngb, adj, vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();

        vector<vector<int>> adj(V);

        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(isConnected[i][j] == 1 && i!=j) adj[i].push_back(j);
            }
        }

        vector<bool> vis(V, false);

        int components = 0;

        for(int i=0; i<V; i++){
            if(vis[i] == false){
                dfs(i, adj, vis);
                components++;
            }
        }

        return components;
    }
};
