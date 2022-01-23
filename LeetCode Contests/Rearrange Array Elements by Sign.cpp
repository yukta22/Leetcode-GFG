//https://leetcode.com/contest/weekly-contest-277/problems/rearrange-array-elements-by-sign/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans1;
        vector<int> ans2;
        int n = nums.size();
        
        for(int i = 0 ; i < n ;i++){
            
            if(nums[i] >= 0){
                ans1.push_back(nums[i]);
            }
            
            if(nums[i] < 0){
                ans2.push_back(nums[i]);
            }
        }
        int s = ans1.size();
        vector<int> ans;
        
        for(int i = 0 ; i < s ;i++){
            ans.push_back(ans1[i]);
            ans.push_back(ans2[i]);
        }
        return ans;
    }
};
