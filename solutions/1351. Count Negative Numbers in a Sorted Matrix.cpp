class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        if(n<0 || m < 0) return 0;
        
        int ans= 0;
        int i = n -1, j =0;
        
        while(i >= 0 && j < m){
            if(grid[i][j] < 0){
                i--;
                ans += m - j;
            }
            else
                j++;
        }
        return ans;
    }
};
