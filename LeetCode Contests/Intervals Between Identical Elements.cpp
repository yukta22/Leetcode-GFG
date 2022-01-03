//TLE

class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        map<int,vector<int>> mpp;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]].push_back(i);
        }
        
        vector<long long> ans(n,0);
        for(auto it : mpp){
            vector<int> indexs = it.second;
            for(int j = 0 ; j < indexs.size() ; j++){
                long long sum = 0;
                for(int k = 0 ; k < indexs.size() ; k++){
                    sum += abs(indexs[j] - indexs[k]);
                }
                ans[indexs[j]] = sum;
            }
            
        }
        return ans;
    }
};

//optimal
