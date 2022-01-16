class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int n = s.length();
        string temp;
        vector<string> ans;
        int m = k;
        
        for(int i = 0 ; i < n ; ){
            temp = "";
            k = m;
            while(i < n && k--){
                temp += s[i];
                i++;
            }
            while(temp.size() != m) {
                temp += fill;
            }

            ans.push_back(temp);
        }
        return ans;
    }
};
