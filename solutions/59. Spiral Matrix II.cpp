class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {        
        vector<vector<int>>ans(n,vector<int>(n));
        if(n == 0)return ans;
        
        int r1 = 0 , r2 = n-1;
        int c1 = 0 , c2 = n-1;
        int j = 1;
        while(r1 <= r2 && c1 <= c2){           
            for(int c = c1 ; c <= c2 ; c++){
                ans[r1][c] = j;
                j++;
            }
            
            for(int r = r1+1 ; r <= r2 ; r++){
                ans[r][c2] = j;
                j++;
            }
            
            if(r1 < r2 && c1 < c2){
                for(int c = c2-1 ; c >= c1 ; c--){
                    ans[r2][c] = j;
                    j++;
                }
                
                for(int r = r2-1 ; r > r1 ; r--){
                    ans[r][c1] = j;
                    j++;
                }
              }  
            r1++;
            r2--;
            c1++;
            c2--;
        }
    return ans;    
    }
};
