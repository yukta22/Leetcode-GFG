class Solution {
public:
    int numTrees(int n) {
       long long int a=1;
       for(int i = n+1; i <= 2*n; i++){
            a *= i;
            a /= (i-n);
        }
        a /= n+1;
        return a;
    }
};
​
// class Solution {
// public:
//     int numTrees(int n) {
//         vector<int> dp(n + 1);
//         dp[0]=1;
//         dp[1]=1;
//         for(int i=2;i<=n;i++){
//             for(int j=0;j<i;j++){
//                 dp[i]+=dp[j]*dp[i-j-1];  //catalan number
//             }
//         }
//         return dp[n];
//     }
// };
​
​
​
