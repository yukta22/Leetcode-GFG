//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k%n == 0) return;
        int first = 0, middle = n-k%n, last = n;
        int next = middle;
        while(first != next) {
            swap (nums[first++], nums[next++]);
            if (next == last) next = middle;
            else if (first == middle) middle = next;
        }   
        
    }
};
