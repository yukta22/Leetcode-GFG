//https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1#
class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        if(n==0)
            return 0;

        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int largest = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(mat[i-1][j-1]==1)
                {
                    dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                    if(largest < dp[i][j])
                        largest = dp[i][j];
                        
                }
                
            }
        }
        return largest;    
    }
};
