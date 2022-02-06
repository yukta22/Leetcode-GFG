class Solution {
public:
    long long smallestNumber(long long num) {
        
        long long res = 0;
        int mp[10] = {0};
        bool pos = (num>0);

        num = abs(num);
        while (num){
            int d = num % 10; 
            mp[d]++; 
            num = num / 10; 
        }

       if(pos){            
            
            for (int i = 1 ; i <= 9 ; i++){
              if (mp[i]){
                  res = i;
                  mp[i]--;
                  break;
              }
            }
            
            for (int i = 0 ; i <= 9 ; i++)
              while (mp[i]--)
                  res = res * 10 + i;       
            
        }
        
        else{            
            
            for (int i = 9 ; i >= 1 ; i--){
              if (mp[i]){
                  res = i;
                  mp[i]--;
                  break;
              }
            }
            
            for (int i = 9 ; i >= 0 ; i--)
              while (mp[i]--)
                  res = res * 10 + i;       
            res = -res;
        }
        return res;
    }
};
