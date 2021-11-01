//https://leetcode.com/contest/weekly-contest-265/problems/smallest-index-with-equal-value/

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            if(i % 10 == nums[i]){
                return i;
            }
        }
        return -1;
    }
};
