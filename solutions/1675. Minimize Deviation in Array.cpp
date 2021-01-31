class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int ans = INT_MAX;
        set<int>ord;
​
        for(int &value : nums){
            if(value%2 == 1) value*=2;
            ord.insert(value);
        }
​
        ans = *ord.rbegin() - *ord.begin();
        while(*ord.rbegin() % 2 == 0){
            ord.insert(*ord.rbegin() /2);
            ord.erase(prev(ord.end()));
            ans = min(ans,*ord.rbegin() - *ord.begin());
        }
        return ans;
    }
};
