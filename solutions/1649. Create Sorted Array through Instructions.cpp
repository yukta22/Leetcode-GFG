#define mod 1000000007
class Solution {
public:
    int bit[100002];
    int sum(int i){
        int ans = 0 ;
        for(int j = i ; j>0 ; j-=(j&-j)) ans+=bit[j];
        return ans;
    }
    
    void update(int i){
        for(int j = i ; j<=100001 ; j+=(j&-j)) bit[j]+=1;
    }
    
    int createSortedArray(vector<int>& instructions) {
        int n = instructions.size();
        int ans = 0 ;
        for(int i=0 ; i<n ; i++){
            ans+=min(sum(instructions[i]-1) , i-sum(instructions[i]));
            ans%=mod;
            update(instructions[i]);
        }
        
        return ans;
    }
};
