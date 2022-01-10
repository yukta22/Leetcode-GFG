class Solution {
public:
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        int ans = 0;
        for(auto &it : startWords) sort(it.begin() ,it.end());
        for(auto &it : targetWords) sort(it.begin() ,it.end());
        
        set<string> st{startWords.begin() , startWords.end()};
        
        for(string& s : targetWords){
            bool flag = 0;
            for(int i = 0; i < s.size() ;i++){
                string curr = s.substr(0,i)+s.substr(i+1);
                if(st.find(curr) != st.end()){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) ans++;
        }
        
        return ans;
    }
};
