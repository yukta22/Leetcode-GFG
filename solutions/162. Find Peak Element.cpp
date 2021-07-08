class Solution {
public:
    int findPeakElement(vector<int>& num) {
        for(int i = 1; i < num.size(); i ++){
            if(num[i] < num[i-1]){
                return i-1;
            }
        }
        return num.size()-1;
​
    }
};
