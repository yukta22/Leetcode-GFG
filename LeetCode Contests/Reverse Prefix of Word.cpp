//https://leetcode.com/contest/weekly-contest-258/problems/reverse-prefix-of-word/

class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str = "";
        
        int idx = 0;
        for(int i = 0 ; i < word.size() ; i++){
            
            if(word[i] == ch){
                // cout<<word[i]<<" "<<ch<<" ";
                idx = i ;
                break;
            }
        }
        cout<<idx<<" ";       
        for (int j=idx; j>=0; j--){
            // cout<<word[j]<<" ";
            str += word[j];
        }
        
                
       for(int k = idx+1 ; k < word.size() ; k++){
            str += word[k];
        } 
        
        return str;
    }
};
