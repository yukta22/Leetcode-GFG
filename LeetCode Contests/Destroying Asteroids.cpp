class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        int n = asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        long long sum = mass;
        
        for(int i = 0 ; i < n ; i++){
            
            if(sum < asteroids[i]){
                return false;
            }
            sum += asteroids[i];
        }
        
        return true;
    }
};
