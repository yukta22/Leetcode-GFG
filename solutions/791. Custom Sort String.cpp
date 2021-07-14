    string s;
    
    bool compare(char c1 , char c2){
        return s.find(c1) < s.find(c2);
    }
    
​
class Solution {
public:
​
    string customSortString(string order, string str) {
        s=order;
        sort(str.begin(), str.end(),compare);
        return str;
    }
};
