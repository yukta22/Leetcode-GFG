class Solution {
public:
    
    int lcs(string s1, string s2){
        int x = s1.length();
        int y = s2.length();
        int  dp[x+1][y+1];
     
        for(int i = 0 ; i <= x ; i++){
            for(int j = 0 ; j <= y ; j++){
                
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                
                else if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
    
        return dp[x][y];
    }
    
    bool isSubsequence(string s, string t) {
        int l = lcs(s,t);
        if(l == s.length()){
            return true;
        }
        
        return false;
    }
};
​
/*
bool isSubsequence(string s, string t) {
        int i = 0 , j = 0;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == s.size();
    }
*/
