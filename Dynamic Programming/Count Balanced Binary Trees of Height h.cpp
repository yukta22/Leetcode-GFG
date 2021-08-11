//https://practice.geeksforgeeks.org/problems/bbt-counter4914/1

#define mod 1000000007

class Solution {
  public:
    long long int countBT(int h) { 
        long long int dp[h+1];
        
        dp[0] = dp[1] = 1;
        
        for(int i = 2 ; i <= h ;i++){
            dp[i] = (dp[i - 1] * ((2 * dp[i - 2])%mod + dp[i - 1])%mod) % mod;
        }
        
        return dp[h];
    }
};
