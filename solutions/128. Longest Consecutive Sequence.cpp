class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
         if (nums.size() == 0) {
            return 0;
        }
        
        set<int> hashSet;
        
        for(int num : nums){
            hashSet.insert(num);
        }
        
        int longestStreak = 1;
        int currentStreak = 1;
        int currentNum;
      
        
        for(int num  : nums){
            if(!hashSet.count(num-1)){
                currentNum = num;
                currentStreak = 1;
            }
            
            while(hashSet.count(currentNum+1)){
                currentNum += 1;
                currentStreak += 1;
            }
            longestStreak  = max(currentStreak, longestStreak);
        }
        
        return longestStreak;
    }
};
