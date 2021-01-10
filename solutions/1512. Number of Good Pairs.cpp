class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int,int>map;
    int count = 0;
 
       
    for(int i=0;i<nums.size();i++){
      map[nums[i]]++;       
    }  
       
    for(auto x : map){
        count += x.second * (x.second-1)/2;
    }   
   
        return count;
      } 
 
};
