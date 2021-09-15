//https://leetcode.com/problems/maximum-product-of-the-length-of-two-palindromic-subsequences/
//T.C. : O(3^n) 

class Solution {
public:
    long long ans = 0;
    
    bool isPalindrome(string s){
      int i = 0;
      int j = s.size() - 1;
      while (i <= j)
      {
        if (s[i++] != s[j--])
        {
          return false;
        }
      }
      return true;
    }
    
    void solve(int idx, string &s1, string &s2 , string &s){
        
        if(idx >= s.size()){
            
            if(isPalindrome(s1) && isPalindrome(s2)){
               long long n1=s1.size(),n2=s2.size();
               ans=max(ans,n1*n2);
            }
            return;
        }
        
        //option 1 : not including s[idx] in string generation
		solve(idx+1,s1,s2,s);
        
        //option 2. adding s[idx] in string s1
        s1.push_back(s[idx]);
        solve(idx+1,s1,s2,s);
        s1.pop_back();
        
        //option 3. adding s[idx] in string s2
        s2.push_back(s[idx]);
        solve(idx+1,s1,s2,s);
        s2.pop_back();
        
    }
    
    int maxProduct(string s) {
        string s1 = "" , s2 = "";
        solve(0,s1,s2,s);
        return ans;
    }
};
