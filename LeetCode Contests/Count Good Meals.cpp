//https://leetcode.com/contest/weekly-contest-222/problems/count-good-meals/

class Solution {
public:
    int countPairs(vector<int>& d) {
        
        int ans = 0,MOD = 1000000007;
        unordered_map<int,int>mp; 
        sort(d.begin(),d.end());
        for(auto x : d){
            for(int i = 0 ; i <= 21 ; i++){
                int z = 1<<i; 
                int y = z-x;
                if(y > x)break;
                ans += mp[y];
                ans %= MOD;
            }
            mp[x]++;
        }
        return ans;
    }
};
