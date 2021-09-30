//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-binary-strings-official/ojquestion

//////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> dp0(n+1,0);
    vector<int> dp1(n+1,0);
    
    dp0[1] = 1;
    dp1[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        dp1[i] = dp1[i-1] + dp0[i-1];
        dp0[i] = dp1[i-1];
    }
    cout << dp0[n] + dp1[n] << "\n"; 
    return 0;

}


//////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int oczeros = 1;
    int ocones =1;
    
   
    for(int i = 2 ; i <= n ; i++){
        int nczeros = ocones;
        int ncones = oczeros + ocones;
        
        oczeros = nczeros;
        ocones = ncones;
    }
    cout << oczeros + ocones << "\n"; 
    return 0;

}
