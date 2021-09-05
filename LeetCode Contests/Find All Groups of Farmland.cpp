//https://leetcode.com/problems/find-all-groups-of-farmland/

class Solution {
public:
    void dfs(vector<vector<int>> &land,int i,int j,int &endi,int &endj){
        int r = land.size();
        int c = land[0].size();
        
        if(i<0 || j<0 || i>r-1 || j>c-1 || land[i][j] == 0)    return;
			
        endi = max(endi,i);
        endj = max(endj,j);
        land[i][j] = 0;
		
        dfs(land,i-1,j,endi,endj);
        dfs(land,i+1,j,endi,endj);
        dfs(land,i,j-1,endi,endj);
        dfs(land,i,j+1,endi,endj);

    }

    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int r = land.size();
        int c = land[0].size();
        vector<vector<int>> ans;
        
        for(int i = 0 ; i < r ; i ++){
            for(int j = 0 ; j < c ; j++){
                if(land[i][j] == 1){
                    int endi=i,endj=j;
                    dfs(land,i,j,endi,endj);
                    ans.push_back({i,j,endi,endj});
                }
            }
        }
        return ans;
    }
};

