//https://leetcode.com/contest/weekly-contest-223/problems/decode-xored-array/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        
        for(auto a : encoded){
            ans.push_back(first^a);
            first = first^a;
        }
        return ans;
    }
};
