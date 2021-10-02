//https://leetcode.com/contest/biweekly-contest-62/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count = 0;
        
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ;j++){
                if(i == j){
                    continue;
                }
                else if(nums[i]+nums[j] == target){
                    count++;
                }
            }
        }
        return count;
    }
};
