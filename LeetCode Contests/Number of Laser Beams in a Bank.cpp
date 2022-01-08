class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int ans = 0 , prev = 0;
        
        for(auto& it : bank){
            
            int cnt = count(it.begin() , it.end() , '1');
            
            if(cnt){
                ans += cnt * prev;
                prev = cnt;
            }
            
        }
        return ans;
    }
};
