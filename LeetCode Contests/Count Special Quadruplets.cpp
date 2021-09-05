//https://leetcode.com/problems/count-special-quadruplets/

class Solution {
public:
    int countQuadruplets(vector<int>& a) {
        
    int n = a.size();
    int count = 0;
 
    // All possible first elements
    for (int i = 0; i < n - 3; i++) {
 
        // All possible second elements
        for (int j = i + 1; j < n - 2; j++) {
 
            // All possible third elements
            for (int k = j + 1; k < n - 1; k++) {
 
                // All possible fourth elements
                for (int l = k + 1; l < n; l++) {
 
                    // Increment counter by 1
                    // if quadruplet sum is L
                    if (a[i] + a[j] + a[k] == a[l])
                        count++;
                }
            }
        }
    }
    return count;
        
    }
};
