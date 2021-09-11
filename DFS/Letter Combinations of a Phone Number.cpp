//https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
    
    void dfs(string digits ,vector<string>& ans,string nums[],int i, string s){
        
        if(i == digits.length()){
            ans.push_back(s);
            return;
        }
        string val = nums[digits[i] - '0'];
        
        for(int j=0;j<val.length(); j++)
            dfs(digits, ans, nums, i+1, s+val[j]);
        
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        
        if(digits.length() == 0) return ans;
        
        string nums[10] ={
          "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"  
        };
        dfs(digits,ans,nums,0,"");
        return ans;
    }
};
