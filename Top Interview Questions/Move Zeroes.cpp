//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0 ;i < nums.size() ; i++){
            if(nums[i] != 0){
                nums[j++] = nums[i];
            }
        }
        
        for(;j<nums.size() ; j++){
            nums[j] = 0;
        }
        
    }
};
