// *****************memoization ***************
// class Solution {
// public:
//     int dp[101];
//     int helper(int i , string s){
//         if(i >= s.size()) return 1;
//         if(dp[i] != -1) return dp[i];
//         int ans = 0 ;
//         int op1 = s[i] - '0',op2=0;
        
//         if(i < s.size()-1){
//             op2 = op1*10 + s[i+1] - '0';
//         }        
//         if(op1 > 0)  ans += helper(i+1,s);
//         if(op1>0 && op2>0 && op2<=26) ans+=helper(i+2,s);
        
//         return dp[i] = ans;
//     }  
//     int numDecodings(string s) {
//         memset(dp , -1,sizeof dp);
//         return helper(0,s);
//     }
// };
​
// *****************dp ***************
class Solution {
public:
    int numDecodings(string s) {
        int dp[102];
        memset(dp ,0,sizeof dp);
        int n = s.size();
        dp[n+1] = 1;
        dp[n] = 1;
        for(int i = n-1 ;i>= 0 ;i--){
            int op1 = s[i] - '0',op2=0;
        
            if(i < s.size()-1){
                op2 = op1*10 + s[i+1] - '0';
            }        
            if(op1 > 0) dp[i] += dp[i+1];
            if(op1>0 && op2>0 && op2<=26)  dp[i] += dp[i+2];
        }
        return dp[0];
    }
};
​
​
​
