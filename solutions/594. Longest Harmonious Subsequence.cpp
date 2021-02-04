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
               maxl = max(maxl, f + mp[num +1] );
           }
        }
        
        return maxl;
    }
};
​
// class Solution {
// public:
//     int findLHS(vector<int>& nums) {
        
//         if(nums.size() == 0) return 0;
        
//         map<int,int> mpp;
        
//         for(int i : nums){
//             mpp[i]++;
//         }
        
//         int maxLHS=0;
//         auto it = mpp.begin();
//         int currentKey=it->first ,  freq=it->second;
        
//         for(it = mpp.begin() ; it!=mpp.end() ; it++){
            
//             if(currentKey + 1 == it->first){
                
//                 maxLHS = max(maxLHS , freq + it->second);
                
//             }
            
//             freq=it->second;
//             currentKey=it->first ;
            
            
//         }
        
