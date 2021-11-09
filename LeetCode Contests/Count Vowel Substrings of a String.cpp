////////////////////////////////////////////////////////// Brute Force //////////////////////////////////////////////////////////
class Solution {
    
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
public:
    int countVowelSubstrings(string word) {
        int count = 0;
        int n = word.size();
        
        for(int i = 0 ; i < n ;i++){
            set<char> st;
            
            for(int j = i ; j < n ; j++){
                if(!isVowel(word[j])) break;
                st.insert(word[j]);
                if(st.size() == 5) count++;
            }
        }
        
        return count;
        
    }
};


////////////////////////////////////////////////////////// optimal approch //////////////////////////////////////////////////////////

class Solution {

private:
    
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
private:

    int countAtMostKVowels(string s, int k){
        int i = 0;
        int count = 0;
        int n = s.size();
        unordered_map<char,int> mpp;
        
        for(int j = 0 ; j < n ; j++){
            if(!isVowel(s[j])){
                mpp.clear();
                i = j + 1;
                continue;
            }
            
            mpp[s[j]]++;
            
            while(mpp.size() > k){
                mpp[s[i]]--;
                if(mpp[s[i]] == 0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            count += (j-i+1);
        }
        return count;
    }
    
public:
    int countVowelSubstrings(string word) {
        return countAtMostKVowels(word , 5) - countAtMostKVowels(word , 4);
    }
};
