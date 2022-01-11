class Solution {
public:
    unordered_map<int,int> mpp;
    void helper(int idx, int OR, vector<int>& nums){
        
        if(idx == nums.size()){
            mpp[OR]++;
            return;
        }
        
        // take the element
        helper(idx+1, OR | nums[idx] , nums);
        
        // do not take the element
        helper(idx+1, OR , nums);
        
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        helper(0,0,nums);
        int maxi = 0 , ans = 0;
        
        for(auto it : mpp){
            if(it.first > maxi){
                maxi = it.first;
                ans = it.second;
            }
        }
        return ans;
    }
};
