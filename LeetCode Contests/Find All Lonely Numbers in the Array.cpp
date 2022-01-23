//https://leetcode.com/contest/weekly-contest-277/problems/find-all-lonely-numbers-in-the-array/

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        
        unordered_map<int,int>mpp;
        
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        
        for(int i = 0 ; i < n ;i ++){
            
            if(mpp[nums[i]] > 1){
                continue;
            }           
            else if(i < n-1 && (nums[i]+1 == nums[i+1]) ) {
                continue;
            }
            else if(i > 0 && (nums[i]-1 == nums[i-1])){
                continue;
            }
            else if(i < n-1 && (nums[i] == nums[i+1])){
                continue;
            }
            else{
                ans.push_back(nums[i]);
            }
            
        }
        return ans;
    }
};

