//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() - 1 , mid;
        
        while(low <= high){
            
            mid = (low+high) >> 1;
            
            if(nums[mid] == target) return true;
            
            if(nums[low] < nums[mid]){
                if(nums[low] <= target && nums[mid] > target){
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
            
            else if(nums[low] == nums[mid]){
                low++;
            }
            
            else{
                if(nums[mid] < target && nums[high] >= target){
                    low = mid + 1;
                }
                else{
                    high = mid -1;
                }
            }
            
        }
        return false;
    }
};

