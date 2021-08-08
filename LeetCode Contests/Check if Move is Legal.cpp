//https://leetcode.com/contest/biweekly-contest-58/problems/check-if-move-is-legal/
class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) {
        board[rMove][cMove] = color; 
        char other = (color == 'W') ? 'B' : 'W';                 
        
        int dx[8] = {0,0,-1,1,-1,-1,1,1};
        int dy[8] = {1,-1,0,0,-1,1,-1,1};
        
        for(int i=0;i<8;i++) {            
            int x = rMove+dx[i];
            int y = cMove+dy[i];             
            int move = 1;
            
            while(x>=0 && y>=0 && x<8 && y<8 && board[x][y]!='.'){
                if(move>=2 && board[x][y] == color) 
                    return true; 
                if(board[x][y] != other)
                    break; 
                move++;
                x += dx[i];
                y += dy[i];
            }          
        }        
        return false;
    }
};
