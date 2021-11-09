//https://leetcode.com/contest/weekly-contest-266/problems/maximum-path-quality-of-a-graph/

class Solution {

private:
    
    int maxVal;
    
    void dfs(int node, int maxTime, int val, vector<int> &vis, vector<pair<int,int>> adj[], vector<int>& values){
        if(maxTime < 0) return;
        
        vis[node]++;
        // if we visited first time, than only add to val
        // because we don't add a node multiple time in a path
        if(vis[node] == 1) val += values[node];
        // if you come back to 0, than its path back to 0
        if(node == 0) maxVal = max(maxVal,val);
        
        for(auto it : adj[node]){
            int child = it.first;
            int time = it.second;
            // make sure the reduce the time
            dfs(child, maxTime - time, val,vis,adj,values);
        }
        vis[node]--;
    }
    
public:
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
        int n = values.size();
        vector<pair<int,int>> adj[n];
        // create a graph
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            int time = it[2];
            adj[u].push_back({v,time});
            adj[v].push_back({u,time});
        }
        maxVal = 0;
        vector<int> vis(n,0);
        
        dfs(0,maxTime,0,vis,adj,values);
        return maxVal;
        
    }
};
