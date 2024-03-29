//https://leetcode.com/problems/longest-increasing-subsequence/

///////////////////////////////////////////////////  Brute Force || T.C = O(N^2) || S.C = O(N) ////////////////////////////////////////////////////

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
		int n = nums.size();

		vector<int>LIS(n+1, 1);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (nums[i] > nums[j])
					LIS[i] = max(LIS[i], 1 + LIS[j]);
			}
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans = max(ans, LIS[i]);
		}

		return ans;


    }
};


//////////////////////////////////////////////// Optimal || T.C = O(nlogn) || S.C = O(N) //////////////////////////////////////////

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>seq;
        seq.push_back(nums[0]);
        
        for(int i=1;i<n;i++){
            if(seq.back() < nums[i]){
                seq.push_back(nums[i]);
            }
            else{
                int ind = lower_bound(seq.begin(),seq.end(),nums[i]) - seq.begin();
                cout << seq[ind]<< " "<<nums[i]<<endl;
                seq[ind] = nums[i];
            }
        }
        
        return seq.size();

    }
};
