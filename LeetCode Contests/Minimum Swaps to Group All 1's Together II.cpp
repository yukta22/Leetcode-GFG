class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int cnto=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnto++;
            }
            if(i>0) nums[i]+=nums[i-1];
        }
        if(cnto==0) return 0;
        int ans=1e8;
        for(int i = 0; i < n; i++){
            int j=i+cnto-1;
            int curr=0;
            if(j<n){
                curr=nums[j];
                if(i>0) curr-=nums[i-1];
            }
            else{
                curr=nums[n-1];
                if(i>0) curr-=nums[i-1];
                j=j%n;
                curr+=nums[j];
            }

            ans=min(ans,cnto-curr);
        }      

        return ans;
    }

};
