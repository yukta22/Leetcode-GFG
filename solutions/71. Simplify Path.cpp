class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> st;
        int i = 0 ;
        string curr = "";
        path += '/';
        
        while(i<path.size()){
            
            if(path[i] == '/'){
                
                if(!curr.empty()){
                    
                    if(curr == "."){
                        
                    }
                    else if(curr == ".."){
                        
                        if(!st.empty()){
                            st.pop();
                        }    
                        
                    }
                    else{
                        st.push(curr);
                    }
                    
                }
                curr.clear();
                i+=1; 
            }
            
            else{
                curr += path[i];
                i+=1;
            }
            
        }
        
        string ans = "";
        while(!st.empty()){
            ans = '/' + st.top() + ans;
            st.pop();
        }
        
        if(ans.empty())   ans += '/';
        return ans;
    }
};
​
​
​
​
​
​
​
​
​
