class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        if(nums.size() == 0) return 0;
        
        map<int,int> mpp;
        
        for(int i : nums){
            mpp[i]++;
        }
        
        int maxLHS=0;
        auto it = mpp.begin();
        int currentKey=it->first ,  freq=it->second;
        
        for(it = mpp.begin() ; it!=mpp.end() ; it++){
            
            if(currentKey + 1 == it->first){
                
                maxLHS = max(maxLHS , freq + it->second);
                
            }
            
            freq=it->second;
            currentKey=it->first ;
            
            
        }
        
        return maxLHS;
        
    }
};
