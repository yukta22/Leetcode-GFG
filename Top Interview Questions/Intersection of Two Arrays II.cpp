//https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()) return intersect(nums2, nums1);
        
        vector<int> ans;
        unordered_map<int,int> mpp;
        
        for(auto a : nums1) mpp[a]++;
        
        for(auto a : nums2){
            if(mpp.find(a) != mpp.end() && mpp[a] > 0){
                ans.push_back(a);
                mpp[a]--;
            }
        }        
        return ans;
    }
};

