//https://leetcode.com/contest/biweekly-contest-62/problems/convert-1d-array-into-2d-array/

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        if (original.size() != (m*n)){
            return ans;
        }
        
        int count=0;

        for(int i=0;i<m;i++) {

            for(int j=0;j<n;j++) {

                v.push_back(original[count]);
                count++;
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};
