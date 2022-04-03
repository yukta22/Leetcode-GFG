class Solution {
public:
    
    long long max(long long x, long long y){
        if(x>y) return x;
        return y;
    }
    
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = 0;
        for(int i = 0 ; i < candies.size() ; i++){
            sum += candies[i];
        }
        
        long long l = 0 , r = sum/k;
        r++;
        long long ans = 0;
        while(l<r){
            long long mid = (l+r)/2;
            if(mid == 0) return 0;
            
            long long count = 0;
            for(int i = 0 ; i < candies.size() ; i++){
                long long x = candies[i];
                count += (x/mid);
            }
            
            if(count >=k ){
                ans = max(ans,mid), l = mid+1;
            }
            else{
                r = mid;
            }
        }
        return ans;
    }
};
