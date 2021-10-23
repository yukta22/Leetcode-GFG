//https://leetcode.com/problems/russian-doll-envelopes/

//T.C = O(N^2)

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        
        sort(envelopes.begin() , envelopes.end());
        
        vector<int> dp(n+1,1);
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++){
                if(envelopes[j][0] < envelopes[i][0] && envelopes[j][1] < envelopes[i][1]){
                    dp[i] = max(dp[i] , dp[j]+1);
                }
            }
        }
        
        int ans = 0;
		for (int i = 0; i < n ; i++) {
			ans = max(ans, dp[i]);
		}

		return ans;


    }
};


//T.C = O(NlogN)

class Solution {
public:

    static bool compare(vector<int> a, vector<int> b) {
        if (a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& env) {
        int n = env.size();
        vector<int> dp;
        sort(env.begin(), env.end(), compare);
		
        for(int i=0;i<n;i++){
            cout << env[i][0] << " " << env[i][1] << "\n";
        }
        
        dp.push_back(env[0][1]);
        
        for(int i = 1; i < n; i++) {
            int cur = env[i][1];

            
			// if all values are less than cur then its time to push the current inside dp
            if(dp.back() < cur){
                dp.push_back(cur);
            }
            
			// else if it is greater then replace the value already present at itr index with cur as cur is lesser
            else{
                 int itr = lower_bound(dp.begin(), dp.end(), cur)-dp.begin();
                 dp[itr] = cur;
            }
           
        }
		
        return dp.size();
    }
};
