//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/goldmine-official/ojquestion

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    int arr[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ;  j < m ; j++){
            cin >> arr[i][j];
        }
    }
    int dp[n][m];
    
    for(int j=m-1;j>=0;j--){
        for(int i=n-1;i>=0;i--){
            if(j== m-1){
                dp[i][j] = arr[i][j];
            }
            else if(i == n-1){
                dp[i][j] = max(dp[i][j+1],dp[i-1][j+1]) + arr[i][j];
            }
            else if(i == 0){
                dp[i][j] = max(dp[i][j+1],dp[i+1][j+1]) + arr[i][j];
            }
            else{
                dp[i][j] = max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1])) + arr[i][j];
            }
        }
    }
    
    int res = dp[0][0];
        for(int i = 1 ; i < n ; i++){
            res = max(res,dp[i][0]);
        }

    
    cout<<res<<endl;
    
return 0;
}
