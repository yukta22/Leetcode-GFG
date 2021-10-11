//https://leetcode.com/contest/weekly-contest-262/problems/two-out-of-three/

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> mpp,m1,m2,m3;
        
        vector<int> ans;
        
        for(int i = 0 ; i < nums1.size() ; i++){
            m1[nums1[i]]++;
            mpp[nums1[i]]++;
        }
        
        for(int i = 0 ; i < nums2.size() ; i++){
            m2[nums2[i]]++;
            mpp[nums2[i]]++;
        }
        
        for(int i = 0 ; i < nums3.size() ; i++){
            m3[nums3[i]]++;
            mpp[nums3[i]]++;
        }
        
        for(auto a : mpp){
            int count = 0;
            
            if(m1[a.first] > 0){
                count++;
            }
            
            if(m2[a.first] > 0){
                count++;
            }
            
            if(m3[a.first] > 0){
                count++;
            }
            
            if(count >=2 ){
                ans.push_back(a.first);
            }
           
        } 
        
        return ans;  
        
    }
};
