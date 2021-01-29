class Solution {
public:
    int minPartitions(string n) {
        int answer=0;
        
        for (char c: n) answer = max(c-'0',answer);
        
        return answer;
​
    }
};
