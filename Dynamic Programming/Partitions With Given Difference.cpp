int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,0));
    if(num[0] == 0) dp[0][0] = 2;
    else dp[0][0] = 1;
    if(num[0] != 0 && num[0] <= tar) dp[0][num[0]] = 1;
    
    for(int ind=1;ind<n;ind++){
        for(int sum=0;sum<=tar;sum++ ){
            int notTake = dp[ind-1][sum];
            int take = 0;
            if(num[ind] <= sum) take = dp[ind-1][sum-num[ind]];
            
            dp[ind][sum] = notTake + take;
        }
    }
    return dp[n-1][tar];

}

int countPartitions(int n, int d, vector<int> &arr) {
    int totalSum = 0;
    for(auto &it:arr) totalSum += it;
    if(totalSum - d < 0 || (totalSum - d) % 2) return false;
    return findWays(arr , (totalSum-d) / 2);
}


