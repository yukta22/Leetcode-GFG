class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans = "";
        for(auto a : s){
            if(st.empty()) st.push(a);
            else if(st.top() == a) st.pop();
            else st.push(a);
        }
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
​
      return ans;
        
    }
};
