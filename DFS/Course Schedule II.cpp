//https://leetcode.com/problems/course-schedule-ii/submissions/
//T.C. : O(V+E)

    //Graph coloring: 0->not visited...1->visited...2->visited & processed

    bool detectCycle_helper(vector<vector<int>>& adj,vector<int>& visited,int v)
    {
        if(visited[v]==1)
            return true;
        if(visited[v]==2)
            return false;
        
        visited[v]=1;   //Mark current as visited
        for(int i=0;i<adj[v].size();++i)
            if(detectCycle_helper(adj,visited,adj[v][i]))
                return true;
        
        visited[v]=2;   //Mark current node as processed
        return false;
    }
    
    //Cycle detection
    bool detectCycle(vector<vector<int>>& adj,int n)
    {
        vector<int> visited(n,0);
        for(int i=0;i<n;++i)
            if(!visited[i])
                if(detectCycle_helper(adj,visited,i))
                    return true;
        return false;
    }

//Topological sort
    void dfs(vector<vector<int>>& adj,int v,vector<bool>& visited,stack<int>& st){
        visited[v] = true;
        for(int i=0;i<adj[v].size();++i)
            if(!visited[adj[v][i]])
                dfs(adj,adj[v][i],visited,st);
        
        st.push(v);
    }

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<vector<int>> adj(numCourses);
        
        for(int i=0;i<n;++i)
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
         
        //Detect CYCLE...If present then return empty array
        vector<int> ans;
        if(detectCycle(adj,numCourses))
            return ans;
        
        //find toposort and store in a stack
        stack<int> st;
        vector<bool> visited(numCourses,false);
        
        for(int i=0;i<numCourses;++i){
            if(!visited[i]){
                dfs(adj,i,visited,st);
            }
        }
 
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;

        
    }
};
