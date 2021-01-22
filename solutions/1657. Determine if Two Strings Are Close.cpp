class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v1(26,0) , v2(26,0) , w1(26,0) , w2(26,0);
        
        for(char c : word1 ){
            v1[c - 'a'] ++;
            w1[c - 'a'] = 1;
        }
        
        for(char c : word2 ){
            v2[c - 'a'] ++;
            w2[c - 'a'] = 1;
        }
        sort(v1.begin() , v1.end());
        sort(v2.begin() , v2.end());
        
        return v1 == v2 && w1 == w2; 
    }
};
