//https://leetcode.com/contest/biweekly-contest-63/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/


class Solution {
public:
    bool winnerOfGame(string colors) {
        int counta = 0,countb = 0;
        
        for(int i = 1 ; i < colors.size()-1 ; i++){
            
            if(colors[i] == 'A' && colors[i-1] == 'A' && colors[i+1] == 'A'){
                counta++; 
            }
            if(colors[i] == 'B' && colors[i-1] == 'B' && colors[i+1] == 'B'){
                countb++;
            }
            
        }
       
        if(counta > countb){
            return true;
        }  
        else if(counta == 0){
            return false;
        }
        else{
            return false;
        }
       
    }
};
