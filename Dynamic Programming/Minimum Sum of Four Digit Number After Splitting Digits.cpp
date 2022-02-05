class Solution {
public:
    int minimumSum(int num) {
        
        string ans= to_string(num);
        int s1,s2;
        int sum = 0;
                       
        sort(ans.begin(),ans.end());
        
        s1 = ((ans[0]-'0')*10) + (ans[2] - '0');
        s2 = ((ans[1]-'0')*10) + (ans[3] - '0');

        sum = s1 + s2;
        
        return sum;
    } 
}; 

