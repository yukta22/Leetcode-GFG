// class Solution {
// public:
//     int dp[301];
//     int helper(int i,string s, set<string>& wordDict){
//         if(i == s.size()) return 1;
//         string temp;
//         if(dp[i]!= -1) return dp[i];
        
//         for(int j = i;j<s.size();j++){
//             temp+=s[j];
//             if(wordDict.find(temp) != wordDict.end()){
//                 if(helper(j+1,s,wordDict))  return dp[i] = 1;
//             }
//         }
//         return dp[i] = 0;        
//     }
    
//     bool wordBreak(string s, vector<string>& wordDict) {
//         set<string> st;
//         memset(dp,-1,sizeof dp);
//         for(auto a : wordDict) st.insert(a);
//         return helper(0,s,st);
//     }
// };
​
class Solution {
public:
   
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        int n = s.size();
        
        int dp[n+1];
        memset(dp,0,sizeof dp);
        for(auto a : wordDict) st.insert(a);
        
        dp[0] = 1;
        
        for(int i = 0; i < n; i++){
            if(dp[i] == 1){
                string temp = "";
                for(int j = i;j<n;j++){
                    temp += s[j];
                    if(st.find(temp) != st.end()){
                        dp[j + 1] = 1;
                    }
                }
            }
            // dp[i] =true;
        }
      
        return (dp[n] == 1);  
        
    }
};
