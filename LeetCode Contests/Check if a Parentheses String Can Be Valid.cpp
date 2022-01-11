class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.size() & 1) return false; 
        for (int i = 0, j = 0; i < s.size(); ++i) {
            if (locked[i] == '0' || s[i] == '(') j += 1; 
            else j -= 1; 
            if (j < 0) return false; 
        }
        for (int i = s.size()-1, j = 0; 0 <= i; --i) {
            if (locked[i] == '0' || s[i] == ')') j += 1; 
            else j -= 1; 
            if (j < 0) return false; 
        }
        return true; 
    }
};
