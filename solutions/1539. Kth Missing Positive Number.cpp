class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int j = 0;
        
        for(int i =  1 ; i < arr[n-1]  ; i++){
            
            if(arr[j] == i)  j++;
            
            else k--;
            
            if( k == 0)  return i;
        }
        
        return arr[n-1] + k;
    }
};
