//https://leetcode.com/contest/weekly-contest-261/problems/minimum-moves-to-convert-string/

class Solution {
public:

int minimumMoves(string s) {
    
        int count = 0;
    
        int n = s.size();
    
        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'X'){
                
                int j = 2;
                count++;
                while(i<n && j != 0){
                    s[i] = 'O';
                    i++;
                    j--;
                    
                    if(j == 0){
                        break;
                    }
                }
                
            }
            
        }
    
        return count;
    }
};
