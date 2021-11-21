//https://leetcode.com/contest/weekly-contest-268/problems/two-furthest-houses-with-different-colors/

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n = colors.size();
        int maxi = INT_MIN;
        
        for(int i = 0 ; i < n ;i++){
            for(int j = i ; j < n ;j++){
                
                if(colors[i] != colors[j]){
                    maxi = max(maxi,abs(i-j));
                }
                
            }
        }
        return maxi;
    }
};
