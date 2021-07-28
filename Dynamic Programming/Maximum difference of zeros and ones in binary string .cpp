//https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1#
/////////////////kadane's algorithm///////////////
class Solution{
public:	
	int maxSubstring(string s)
	{
	    int sum = 0;
	    int maxi = INT_MIN;
	    
	    for(int i = 0;i < s.length() ; i++){
	        int x = (s[i] == '0') ? 1 : -1;
	        
	        sum += x;
	        maxi = max(maxi , sum);
	        
	        if(sum < 0) sum = 0;        
	        
	    }
	    return maxi;
	}
};
