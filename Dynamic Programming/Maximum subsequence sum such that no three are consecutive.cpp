//https://www.geeksforgeeks.org/maximum-subsequence-sum-such-that-no-three-are-consecutive/

int arr[] = {3000, 2000, 1000, 3, 10}

int dp[10000];

int func(int n){
    if(n == -1)return 0;
    if(n == 0)return arr[0];
    if(n == 1)return arr[1] + arr[0];
    if(dp[n] != -1) return dp[n];

   return dp[n] = max( max(func(n-1) , arr[n] + func(n-2)) , 
               arr[n] + arr[n-1] + func(n-3));

}

void solve(){
    int n;
    n = 5;
    memset(dp,-1,sizeof (dp));
    func(n-1);
    cout << dp[n-1];
}
