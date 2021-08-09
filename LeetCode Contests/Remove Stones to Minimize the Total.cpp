//https://leetcode.com/contest/weekly-contest-253/problems/remove-stones-to-minimize-the-total/
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        
        for(auto a : piles)  pq.push(a);
        
        while(k--){
            int t = pq.top();
            pq.pop();
            pq.push(t - (t/2));
        }
        
        int sum = 0;
        
        while(pq.size()){
            sum += pq.top();
            pq.pop();
        }
        
        return sum;
        
    }
};
