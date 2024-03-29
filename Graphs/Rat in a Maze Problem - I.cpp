// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

//  T.C = O(N^2)  || S.C = O(N^2)

class Solution{
    vector<string>ans;
    
    void dfs(int i , int j , string s ,vector<vector<int>> &m , int n , vector<vector<int>>&vis){
        
        if(i<0 || j<0 || i>=n || j>=n)return;
        if(m[i][j] == 0 || vis[i][j] == 1)return;
        if(i == n-1 && j == n-1){
            ans.push_back(s);
            return;
        }
        
        vis[i][j] = 1;
        
        dfs(i-1,j,s+'U',m,n,vis);
        dfs(i+1,j,s+'D',m,n,vis);
        dfs(i,j-1,s+'L',m,n,vis);
        dfs(i,j+1,s+'R',m,n,vis);
        
        vis[i][j] = 0;
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        ans.clear();
        if(m[0][0] == 0)return ans;
        if(m[n-1][n-1] == 0)return ans;
        vector<vector<int>>vis(n , vector<int>(n,0));
        string s = "";
        dfs(0,0,s,m,n,vis);
        sort(ans.begin() , ans.end());
        return ans;
    }
};
