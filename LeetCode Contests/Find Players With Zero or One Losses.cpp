class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        set<int> win, loose;
        unordered_map<int,int> los;
        
        for(auto it : matches){
            win.insert(it[0]);
            loose.insert(it[1]);
            los[it[1]]++;
        }
        
        vector<int> v1,v2;
        vector<vector<int>> ans;
        
        for(auto it : win){
            if(los.find(it) == los.end()){
                v1.push_back(it);
            }
        }
        
        for(auto it : loose){
            if(los[it] == 1){
                v2.push_back(it);
            }
        }
        
        ans.push_back(v1);
        ans.push_back(v2);
        
        return ans;        
    }
};
