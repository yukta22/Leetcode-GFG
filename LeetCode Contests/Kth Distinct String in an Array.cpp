//https://leetcode.com/contest/biweekly-contest-64/problems/kth-distinct-string-in-an-array/

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string,int> mpp;
        
        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]]++;
        }
        vector<string> ans;
        for(int i = 0 ; i < n ; i++){
            if(mpp[arr[i]] <= 1){
                ans.push_back(arr[i]);
            }
        }
        
        if(ans.size() < k){
            return "";
        }
        
        return ans[k-1];
        
    }
};
