//https://leetcode.com/contest/weekly-contest-254/problems/number-of-strings-that-appear-as-substrings-in-word/

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int a = 0,count = 0;;
        for(int i = 0 ; i < patterns.size() ; i++){
            if(word.find(patterns[i] ,a) != string::npos){
                count++;
            }
        }
        return count;
    }
};
