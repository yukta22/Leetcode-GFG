class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> odd,even;
        
        for(int i = 0 ; i < n ; i++){
            if(i%2 == 1){
                odd.push_back(nums[i]);
            }
            else{
                even.push_back(nums[i]);
            }
        }
        
        sort(odd.begin(),odd.end(),greater<int>());
        // reverse(odd.begin(), odd.end());  
        
        sort(even.begin(),even.end());
        int i=0;
        int a=0;
        int b=0;

        while(i<n){
            if(i%2==0){
                nums[i]=even[a];
                a++;
            }
            else{
                nums[i]=odd[b];
                b++;
            }
            i++;
           
        }

        
        return nums;
    }
};
