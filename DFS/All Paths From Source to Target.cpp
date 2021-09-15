//https://leetcode.com/problems/all-paths-from-source-to-target/

class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<vector<int>> &ans,vector<int> &path,int u){
        path.push_back(u);
        
        if(u == graph.size()-1) {
            ans.push_back(path);
        }
        else{
            for(int v : graph[u]){
                dfs(graph,ans,path,v);
            }
        }
        path.pop_back();   
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        
        dfs(graph,ans,path,0);
        return ans;
    }
};
