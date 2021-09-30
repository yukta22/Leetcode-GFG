//https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1
//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/unbounded-knapsack-official/ojquestion


//////////////////////////////////////////////////////////////////////////////////////////
    
    int knapSack(int n, int W, int val[], int wt[])
    {
        int t[n+1][W+1];
        for(int i = 0 ; i < n+1 ; i++)
            for(int j = 0 ; j < W+1 ; j++)
                if(i == 0 || j == 0)
                    t[i][j] = 0;
                
        for(int i = 1 ; i < n+1 ; i++){
            for(int j = 1 ; j < W+1 ; j++){
                if(wt[i-1] <= j){
                    t[i][j] = max(val[i-1] + t[i][j - wt[i-1]] , t[i-1][j]);
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        return t[n][W];
    }
  
//////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int wt[n];
    int val[n];
    
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int tar;
    cin >> tar;
    vector<int>dp(tar+1,0);
    
    for(int bag = 0 ; bag <= tar ; bag++){
        for(int i = 0 ; i < n ; i++){
            if(val[i] <= bag){
                dp[bag] = max(dp[bag],dp[bag-val[i]] + wt[i]);
            }
        }
    }
   
    cout << dp[tar] << "\n";
    
    return 0;
}

