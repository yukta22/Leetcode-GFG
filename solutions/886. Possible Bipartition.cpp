class Solution {
public:
    
    bool dfs(int node,vector<vector<int>> &graph,int color[]){
        if(color[node] == -1)  color[node] = 1;
        
        for(auto it : graph[node]){
            if(color[it] == -1){
                color[it] = 1 - color[node];
                if(!dfs(it,graph,color)){
                    return false;
                }
            }
                else if(color[it] == color[node]){
                    return false;
                }
            
        }
        return true;        
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n+1);
        
        for(auto i : dislikes){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        
        int color[n+1];
        memset(color,-1,sizeof color);
        
        for(int i = 1 ; i <= n ; i++){
            if(color[i] == -1){
                if(!dfs(i,graph,color)){
                    return false;
                }
            }
        }
        return true;
    }
};
