class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> ans(s.size() , 0);
        
        int len = s.size();
        for(int i = 0 ; i < len ; i++){
            int x = startPos[0];
            int y = startPos[1];
            int count = 0;
            
            for(int j = i ; j < len ; j++){
                
                if(s[j] == 'U') x-=1;
                else if(s[j] == 'R') y+=1;
                else if(s[j] == 'L') y-=1;
                else x+=1;
                
               
                if(x>= 0 && x<n && y >= 0 && y < n){
                    count++;
                }
                else{
                    break;
                }
                
            }
            ans[i] = count;
        }
        return ans;
    }
};
