//https://leetcode.com/contest/weekly-contest-261/problems/find-missing-observations/

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> ans;
        int m = rolls.size();
        
        int sum = 0;
        
        for(int i = 0 ; i < m ; i++){
            sum += rolls[i];
        }
        
        int req = (mean*(n+m)) - sum;
        
        if(req < n || req > (n*6)) return ans;
        
        int div = req/n;
        ans.resize(n,div);
        
        int rem = req % n;
    
        for(int i = 0 ; i < rem ; i++)  ans[i] += 1;
        
        return ans;
    }
};
