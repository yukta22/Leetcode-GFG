class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int mini = *min_element(nums.begin() , nums.end());
        
        for(auto a : nums){
            ans += a - mini;
        }
        return ans;
    }
};
