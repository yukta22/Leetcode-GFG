class Solution {
public:
    
    // time == O(n)  space == O(n)
    
    int findLHS(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        
        for(auto i : nums){
            mp[i]++;
        }
        
        int maxl = 0;
        
        for(auto & [num,f] : mp){
           if(mp.find(num+1) != mp.end()){
               maxl = max(maxl , mp[num] + mp[num +1] );
           }
        }
        
        return maxl;
    }
};
​
​
// public class Solution {
// TC:o(n2)
