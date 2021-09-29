// https://practice.geeksforgeeks.org/problems/coin-change2448/1#

/////////////////////////////////////////////////optimal 1D dp//////////////////////////////////////
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int amt;
    cin >> amt;
    
    vector<int>dp(amt+1,0);
    dp[0] = 1;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = a[i] ; j < amt+1 ; j++){
            dp[j] += dp[j-a[i]];
        }
    }
    
    cout << dp[amt] << "\n";
    return 0;
}


//  This method in we use knapsack unbounded method bcs in this question in value use over 1 times so 

class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       long long int dp[m+1][n+1];
         
        for(int i = 0 ; i <=m ;i++)
            dp[i][0] = 1;
            
        for(int i = 0 ; i  <=n; i++)
            dp[0][i] = 0;

        for (int i =1 ; i <=m ; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                if(S[i-1] <= j){
                    dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[m][n];
      
    }
};

/////////////////////////////////////////////   Recursive Approch ////////////////////////////////////////


 int count( int S[], int m, int n )
{
  
    if (n == 0)
        return 1;
     
    if (n < 0)
        return 0;

    if (m <=0 && n >= 1)
        return 0;

    return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}


