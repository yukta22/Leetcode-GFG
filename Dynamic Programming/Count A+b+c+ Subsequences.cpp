//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-a+b+c+subsequences-official/ojquestion

#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    string str;
    cin>>str;
    
    int a = 0;
    int ab = 0;
    int abc = 0;
    
    for(int i = 0 ;i < str.length() ; i++){
        char ch = str[i];
        
        if(ch == 'a'){
            a = 2*a+1;
        }
        else if(ch == 'b'){
            ab = 2*ab+a;
        }
        else if(ch == 'c'){
            abc = 2*abc +ab;
        }
    }
    cout<<abc<<endl;    
    return 0;
}
