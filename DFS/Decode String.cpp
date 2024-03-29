//https://leetcode.com/problems/decode-string/

class Solution {
    
    string decodeString(string& s,int &i) {
        string result;
        while(i < s.length() && s[i] != ']'){
            
            if(isdigit(s[i])){
                int k = 0;
                while(i < s.length() && isdigit(s[i])){
                    k = k * 10 + s[i++] - '0';
                }
                i++;
                string str = decodeString(s,i);
                while(k-- > 0){
                    result += str;
                }
                i++;
            }
            else{
                result += s[i++];
            }     
        }
        return result;
    }
    
public:
    string decodeString(string s) {
        int i = 0;
        return decodeString(s,i);
    }
};
