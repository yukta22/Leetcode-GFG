//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/

class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if(x<0)  flag =1;
        int num = abs(x);
        
        long int newNum = 0;
        
        while(num){
            
            int rem = num%10;
            
            if(newNum*10 > INT_MAX || newNum*10 < INT_MIN)  return 0;
            
            newNum = newNum*10 + rem;            
            num /= 10; 
        }
        if(flag){
            return newNum*(-1);
        }else{
            return newNum;
        }
    }
};
