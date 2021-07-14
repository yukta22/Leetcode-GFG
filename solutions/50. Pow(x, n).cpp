class Solution {
public:
    double myPow(double x, int n) {
        
        if(n == 0) return 1;
        
        if(n < 0){
            x = 1/x;
            return (n%2 == 0) ? pow(x*x , -(n/2)) : x*pow(x*x , -(n/2));
        }
         return (n%2 == 0) ? pow(x*x , n/2) : x*pow(x*x , n/2);
    }
};
