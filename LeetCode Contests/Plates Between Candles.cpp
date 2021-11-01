//https://leetcode.com/contest/biweekly-contest-64/problems/plates-between-candles/

class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int prefix[100001];
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '*')       count++;
            
            prefix[i] = count;
        }
        
        int left[100001];
        int right[100001];
        int val=0;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '|'){
                val = i;
                left[i] = i;
            }
            else{
                left[i] = val;
            }
            
        }
        val=0;

        for(int i = s.size() - 1 ; i >= 0 ; i--){
            if(s[i] == '|'){
                val = i;
                right[i] = i;
            }
            else{
                right[i] = val;
            }
            
        }
        
        vector<int> ans;
        for(auto q:queries)
        {
            int v1=prefix[right[q[0]]];
            int v2=prefix[left[q[1]]];
            if((v2-v1)<0)
                v2=v1;
            ans.push_back(v2-v1);
        }
        return ans;       
    }
};

