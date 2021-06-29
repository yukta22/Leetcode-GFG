class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0 ,maxi = INT_MIN , zeroCounter = 0;
        
        for(int end =0 ; end < nums.size() ; end++){
            if(nums[end] == 0){
                zeroCounter++;
            }
            
            while(zeroCounter > k){
                if(nums[start] == 0){
                    zeroCounter--;
                }
                start++;
            }
            
            maxi = max(maxi , end-start + 1);
            
        }
        return maxi;
    }
};
