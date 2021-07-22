class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int maxi , curr , ans = 1;
        
        maxi = curr = nums[0];
        
        for(int i = 0 ; i < n ; i++){
            if(nums[i] < maxi){
                maxi = curr;
                ans = i + 1;
            }
            else if(nums[i] > curr){
                curr = nums[i];
            }
        }
        return ans;
    }
};
