//https://leetcode.com/contest/weekly-contest-224/problems/tuple-with-same-product/

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans = 0;
        
        map<int,int> mpp;
        
        for(int i = 0 ; i< nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j ++){
                ans += (mpp[nums[i] * nums[j]]++);
            }
        }
        return ans*8;
        
    }
};
