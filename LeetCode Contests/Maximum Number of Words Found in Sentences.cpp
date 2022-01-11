class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 1;
        int maxi = 0;
        for(auto it : sentences){
            
            for(int i = 0 ;i < it.length() ; i++){
                if(it[i] == ' '){
                    count++;   
                }
                
            }
            maxi = max(maxi,count);
            count = 1;
            
        }
        return maxi;
    }
};
