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
class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n = arr.size();
        vector<long long> answer;
        vector<long long> prefix(n);
        vector<long long> suffix(n);
        unordered_map<long,long> steps;
        unordered_map<long,long> count;
        
        for(int i=0;i<n;i++){
            steps[arr[i]] = i;
            count[arr[i]] = 0;
        }
        for(int i=0;i<n;i++){
            prefix[i] = prefix[steps[arr[i]]] + count[arr[i]]*abs(i-steps[arr[i]]);
            count[arr[i]]++;
            steps[arr[i]] = i;
        }
        
        for(int i=0;i<n;i++){
            steps[arr[i]] = i;
            count[arr[i]] = 0;
        }
        for(int i=n-1;i>=0;i--){
            suffix[i] = suffix[steps[arr[i]]] + count[arr[i]] * abs(i-steps[arr[i]]);
            count[arr[i]]++;
            steps[arr[i]] = i;
        }
        
        for(int i=0;i<n;i++){
            answer.push_back(prefix[i] + suffix[i]);
        }
        return answer;
    }
};

