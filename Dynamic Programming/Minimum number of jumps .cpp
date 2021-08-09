//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

///////////////////////////using dp////////////////////////////
//T.C. : O(n^2)

class Solution{
  public:
    int minJumps(int a[], int n){
        int dp[n];
        
        for(int i = 0 ; i < n ; i++) dp[i] = INT_MAX;
        dp[0] = 0;
        for(int i = 1 ; i < n ; i++){
            for(int j = 0; j < i ; j++){
                if(dp[j] != INT_MAX && (a[j] + j >= i)){
                    if(dp[j] + 1 < dp[i]){
                        dp[i] = dp[j] + 1;
                    }
                }
            }
        }
        
        if(dp[n-1] == INT_MAX) return -1;
        else return dp[n-1];
        
    }
};


//////////////////////////another approch////////////////
//T.C. : O(n)
class Solution{
  public:
    int minJumps(int a[], int n){
        int maxi = a[0];
        int step = a[0];
        int jump = 1;
        
        if(n == 1) return 0;
        
        else if(a[0] == 0) return -1;
        
        else{
            for(int i = 1 ;i < n ; i++){
                if(i == n-1)  return jump;
                maxi = max(maxi , i + a[i]);
                step--;
                if(step == 0){
                    jump++;
                    if(i >= maxi){
                        return -1;
                    }
                    step = maxi - i;
                }
            }
        }
        
        
    }
};
