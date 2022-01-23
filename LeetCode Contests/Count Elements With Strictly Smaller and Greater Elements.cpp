//https://leetcode.com/contest/weekly-contest-277/problems/count-elements-with-strictly-smaller-and-greater-elements/

class Solution {
public:
    int countElements(vector<int>& nums) {
  
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            int e=0,f=0;
            for(int j=0;j<n;j++){
                if(nums[i]<nums[j])
                    e=1;
                if(nums[i]>nums[j])
                    f=1;
            }
            if(e && f)
                ans++;
        }
        return ans;

    }
};


