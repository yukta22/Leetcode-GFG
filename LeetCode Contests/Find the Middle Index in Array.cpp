//https://leetcode.com/problems/find-the-middle-index-in-array/

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            
            int a = i;
            int sum1 = 0, sum2 = 0;
            for(int x = 0 ; x < a ; x++){
                sum1 += nums[x];
            }
            
            for(int y = a+1 ; y < n ; y++){
                sum2 += nums[y];
            }
            
            if(sum1 == sum2){
                return a;
            }
        }
        
        return -1;
    }
};
