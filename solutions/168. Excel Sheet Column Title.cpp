class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        char temp;        
​
        while(columnNumber){
            columnNumber -= 1;
            temp = 'A' + columnNumber % 26;
            res = temp + res;
            columnNumber /= 26;
        }
​
        return res;
​
    }
};
