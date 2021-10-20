//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/tiling2-official/ojquestion#

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int n,m;
    cin>>n;
    cin>>m;
    
    int dp[n+1];
    
    for (int i = 1; i <= n; i++) {
        if(i < m){
            dp[i] = 1;
        }
        else if(i == m){
            dp[i] = 2;
        }
        else{
           dp[i] = dp[i-1]+dp[i-m]; 
        }
      
    }
    cout<<dp[n]<<endl;
    return 0;
    
}
