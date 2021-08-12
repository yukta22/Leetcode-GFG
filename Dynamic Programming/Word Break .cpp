//https://practice.geeksforgeeks.org/problems/word-break1352/1#

class Solution
{
public:
    unordered_map<string,int> dp;
    int solve(string a, vector<string> &b){
        
        int n = a.length();
        if(n == 0) return 1;
        
        if(dp[a] != 0)  return dp[a];
        
        for(int i = 1 ; i <= n ; i++){
            int f = 0;
            string s = a.substr(0,i);
            for(int j = 0 ; j < b.size() ; j++){
                if(s.compare(b[j])== 0){
                    f = 1;
                    break;
                }
            }
            if(f == 1 && solve(a.substr(i,n-i) , b) == 1) return dp[a]=1;
        }
        
        return dp[a] = -1;
    }
        
    int wordBreak(string A, vector<string> &B) {
        int ans = solve(A,B);
        
        if(ans == 1) return 1;
        else return 0;
        
    }
};
