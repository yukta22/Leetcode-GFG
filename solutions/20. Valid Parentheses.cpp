class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        char x;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                sk.push(s[i]);
                continue;
            }
        
        
            if(sk.empty()){
                return false;
            }
​
            switch(s[i]){
                case ')':
​
                    x=sk.top();
                    sk.pop();
                    if(x == '{' || x == '[')
                        return false;
                    break;
​
                case '}': 
​
                    x = sk.top(); 
                    sk.pop(); 
                    if (x == '(' || x == '[') 
                        return false; 
                    break; 
​
                case ']': 
​
                    x = sk.top(); 
                    sk.pop(); 
                    if (x == '(' || x == '{') 
                        return false; 
                    break; 
            } 
