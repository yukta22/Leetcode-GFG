class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();        
        int dp[n];
        
        dp[0] = nums[0];
        int maxi = nums[0];
        
        for(int i = 1 ;i < n ; i++){
            dp[i] = max(nums[i] , nums[i] + dp[i-1]);
            maxi = max(maxi , dp[i]);
        }
        return maxi;
        
    }
};
