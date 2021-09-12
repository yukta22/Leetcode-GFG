//https://leetcode.com/contest/weekly-contest-258/problems/number-of-pairs-of-interchangeable-rectangles/

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        double a[n];
        for(int i=0;i<n;i++){
            a[i]=double(rectangles[i][1])/rectangles[i][0];
        }
        
        unordered_map<double,int>mp;
        long long ans=0;
        for(int i=0;i<n;i++)    {
           if(mp.find(a[i])!=mp.end()){
                ans+=mp[a[i]];
           }
            
            mp[a[i]]++;
        }
       return ans;

    }
};
