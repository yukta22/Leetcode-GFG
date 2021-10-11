//https://leetcode.com/contest/weekly-contest-262/problems/minimum-operations-to-make-a-uni-value-grid/

class Solution {
    
    int solve(int need , int x , vector<int>&v){
        int count = 0;
        
        for(int i = 0 ; i < v.size() ; i++){
            int diff = abs(v[i] - need);
            if(diff % x != 0)return -1;
            count += (diff / x);
        }
        return count;
    }
    
public:
    int minOperations(vector<vector<int>>& grid, int x){
        
        vector<int>v;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int n = v.size();
        int med = v[n/2];
        int ans = solve(med,x,v);
        return ans;
    }
};
