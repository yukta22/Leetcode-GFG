//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/

//T.C. : O(n)
//S.C. : O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0) return 0;
        
        int i = 0;
        
        for(int j = 1 ; j < nums.size() ; j++){
            if(nums[j] !=nums[i]){        
                i++;
                nums[i]=nums[j];
           }
        }
       return i+1;
    }
};

