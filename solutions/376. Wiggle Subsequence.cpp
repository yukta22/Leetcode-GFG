class Solution {
public:
   int wiggleMaxLength(vector<int>& nums) {
​
        int sign=1,c1=1,c2=1;
        for(int i=1;i<nums.size();i++){
            if(sign*(nums[i]-nums[i-1])>0){
                sign=sign*-1;
                c1++;
            }
        }
        sign=-1;
        for(int i=1;i<nums.size();i++){
            if(sign*(nums[i]-nums[i-1])>0){
                sign=sign*-1;
                c2++;
            }
        }
        
        return max(c1,c2);
   }
};
