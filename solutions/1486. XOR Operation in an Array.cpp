class Solution {
public:
    int xorOperation(int n, int start) {
        
        int nums[n];
        int XOR = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            nums[i] = start + 2*i;
            XOR ^= nums[i];
        }
        
        return XOR;
        
    }
};
