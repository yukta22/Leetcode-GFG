//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/

class Solution {
public:
   void reverseString(vector<char>& s) {
        
        int left = 0;
       int right = s.size()-1;
        
        while(left < right){
            swap(s[left], s[right]); 
            
            left++;
            right--;
        }
     }
};
