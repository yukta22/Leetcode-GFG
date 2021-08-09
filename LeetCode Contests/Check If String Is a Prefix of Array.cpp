//https://leetcode.com/contest/weekly-contest-253/problems/check-if-string-is-a-prefix-of-array/
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans = "";
        
        
        for(auto a : words){
            ans += a;
            if(s == ans){
                return true;
            }
            if(ans.length() >= s.length()) {
                return false;
            }
        
        }
        return false;
    }
};
