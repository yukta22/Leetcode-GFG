//https://leetcode.com/contest/weekly-contest-269/problems/k-radius-subarray-averages/
//Time Complexity O(n*n)
//Space Complexity O(1)

class Solution {
public:
    #define ll long long
    
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            int lIdx=i-k,rIdx=i+k;
            if(lIdx<0 || rIdx>=n) continue;
            ll sum=0;
            for(int j=lIdx;j<=rIdx;j++) sum+=nums[j];
            ans[i]=(sum)/(k+k+1);
        }
        return ans;
    }
};
