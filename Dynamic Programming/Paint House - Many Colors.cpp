//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-many-colors-official/ojquestion

//T.C. : O(n^3)
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    cin >> k;
    
    int arr[n][k];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < k; j++) {
        cin>>arr[i][j];
      }
    }
    
    int dp[n][k];
    for (int j = 0; j < k; j++) {
      dp[0][j] = arr[0][j];
    }
    
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < k; j++) {
        int min = INT_MAX;

        for (int l = 0; l < k; l++) {
          if (l != j) {
            if (dp[i - 1][l] < min) {
              min = dp[i - 1][l];
            }
          }
        }
        dp[i][j] = arr[i][j] + min;
      }
    }
    
    int min = INT_MAX;
    for ( int i = 0; i < k; i++) {
      if (dp[n - 1][i]) < min) {
        min = dp[n - 1][i];
      }
    }
    
    cout << min << endl;
    return 0;

}












