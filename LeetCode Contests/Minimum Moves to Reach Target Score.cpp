class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int i = 0 ;
        int count = 0;
        while(target > 1 && i < maxDoubles ){
            if(target % 2 == 0){
                count++;
                i++;
                target = target/2;
            }
            else{
                target--;
                count++;
            }
        }
        return count + (target - 1);
    }
};
