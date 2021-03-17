class Solution {
public:
Solution(double radius, double x_center, double y_center): r{radius}, x{x_center}, y{y_center} {}
​
vector<double> randPoint() {
    double a{x+r}, b{y+r};
    
    while((a-x)*(a-x)+(b-y)*(b-y) > r*r) {
        a = (double)rand()/RAND_MAX*(r*2)+x-r, b = (double)rand()/RAND_MAX*(r*2)+y-r;
    }
    return {a,b};
    
}
​
double r;
double x;
double y;
};
​
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
