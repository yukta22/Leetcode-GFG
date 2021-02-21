class Solution {
public:
    int brokenCalc(int X, int Y) {
        if(X > Y) return X - Y; 
        
        int num = 0;
        int mult = 1;
        while(X < Y){
            X *= 2;
            mult *= 2;
            num++;
        }
        
        int diff = X - Y;
        while(diff != 0){
            if(diff - mult < 0){
                mult /= 2;
            }
            else{
                diff -= mult;
                num++;
            }
        }
        return num;
    }
  
};
