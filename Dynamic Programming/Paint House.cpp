//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-official/ojquestion

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int arr[n][3];
    
    for(int i = 0 ; i < n ; i++){
        for (int j = 0; j < 3; j++) { 
            cin>>arr[i][j];
        }
    }
    
    long long int dp[n][3];
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];
    
    for (int i = 1; i < n; i++) {                 
      dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
      dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
      dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + arr[i][2];
    }
    cout<<min(dp[n - 1][0],(min(dp[n - 1][1], dp[n - 1][2])))<<endl;
    return 0;

}

