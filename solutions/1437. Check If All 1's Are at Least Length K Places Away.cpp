class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count = k ;
        for(auto i : nums){
            
            if(i == 1){
                
                if(count < k)
                    return false;
                
                count = 0 ;
                
            }
            
            else{
                count++;
            }
            
        }
        
        return true;
        
    }
};
