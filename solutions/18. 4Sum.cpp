class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty())
            return res;
        
        int n= nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i =0 ; i < n ;i++){
            for(int j = i+1 ; j < n ; j++){
                
                int target2 = target - nums[j] - nums[i];
                
                int front = j+1;
                int back = n-1;
                while(front < back){
                    
                    int two_sum = nums[front] + nums[back];
                    
                    if(two_sum < target2) front++;
                    
                    else if(two_sum > target2) back--;
                    
                    else{
                        
                       vector<int> quadraplet(4,0);
                        quadraplet[0] = nums[i];
                        quadraplet[1] = nums[j];
                        quadraplet[2] = nums[front];
                        quadraplet[3] = nums[back];
                        
                        res.push_back(quadraplet);
                        
                        while(front  < back && nums[front] == quadraplet[2]) ++front;
                        
                        while(front  < back && nums[back] == quadraplet[3]) --back;
                    }
                    
                }
