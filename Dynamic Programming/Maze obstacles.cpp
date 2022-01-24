int mod = 1e9 + 7;

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {

    vector< vector<int> > dp(n, vector<int>(m, 0));
    dp[0][0] = 1;

    for(int i = 1; i < n; i++){
        if(mat[i][0] == 0){
            dp[i][0] = dp[i - 1][0];
        }
    }
    for(int i = 1; i < m; i++){
        if(mat[0][i] == 0){
            dp[0][i] = dp[0][i - 1];
        } 
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(mat[i][j] == 0){
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod; 
            }
        }
    }
    return dp[n - 1][m - 1];  
}
