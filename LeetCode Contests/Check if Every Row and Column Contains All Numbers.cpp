//T.C. : O(n^2)
//S.C. : O(n)
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {        
        
        for(int i = 0 ; i < matrix.size() ; i++){
            set<int> s;
            for(int j = 0 ; j < matrix[0].size() ; j++){
                int x = matrix[i][j];
                
                if (s.find(x) != s.end()){
                    return false;
                }
                else{
                    s.insert(x);
                }
                
            }
        }
        
        for(int i = 0 ; i < matrix.size() ; i++){
            set<int> s;
            for(int j = 0 ; j < matrix[0].size() ; j++){
                int x = matrix[j][i];
                
                if (s.find(x) != s.end()){
                    return false;
                }
                else{
                    s.insert(x);
                }
                
            }
        }
        return true;
        
    }
};


//////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for(int i = 0 ;i < matrix.size() ; i++){
            int rowXor = 0;
            int colXor = 0;
            
            for(int j = 0 ; j < matrix[0].size() ; j++){
                rowXor ^= matrix[i][j] ^ (j+1);
                colXor ^= matrix[j][i] ^ (j+1);
            }
            if(rowXor != 0 || colXor != 0){
                return false;
            }
        }
        return true;
    }
};
