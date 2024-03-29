//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/maximum-sum-non-adjacent-elements-official/ojquestion

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    int inc = arr[0];
    int exc = 0;
    
    for(int i = 1 ; i < n ; i++){
        int ninc = exc + arr[i];
        int nexc = max(inc,exc);
        
        inc = ninc;
        exc = nexc;
    }
    
    int ans = max(inc,exc);
    cout<<ans<<endl;
    
    return 0;

}

