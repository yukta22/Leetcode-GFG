//https://leetcode.com/contest/weekly-contest-269/problems/removing-minimum-and-maximum-from-array/

// 3 choices to delete them and we want to choose minimum from them 

// option 1: Delete smaller index from left and higher index from right
// option 2: Delete both smaller and higher index number from left
// option 3: Delete both smaller and higher index number from right


//T.C. : O(n) 
//S.C. : O(1)  

#define ll long long
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int maxi = INT_MIN , mini = INT_MAX;
        
        for(auto x:nums) {
            maxi = max(maxi,x);
            mini = min(mini,x);
        }
        
        int mxIdx,mnIdx;
        for(int i=0;i<n;i++){
            if(nums[i] == maxi) mxIdx=i;
            else if(nums[i] == mini) mnIdx=i;
        }
        
        int ans = 0;
        int small = min(mxIdx,mnIdx), high = max(mxIdx,mnIdx);
        
        ans = (small+1)+(n-high); //option 1
        ans = min(ans,high+1);    //option 2
        ans = min(ans,n-small);   //option 3
        
        return ans;
        
    }
};

