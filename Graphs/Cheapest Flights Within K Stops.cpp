//https://leetcode.com/problems/cheapest-flights-within-k-stops/
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> g(n);
        
        for(auto x : flights){
            g[x[0]].push_back({x[1] ,x[2]});
        }
        
        vector<int> dist(n+1, INT_MAX);   //to avoid tle
        
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
        pq.push(make_tuple(0,src,0));
        
        while(!pq.empty()){
            auto [cost,u,stop] = pq.top();
            pq.pop();
            
            if(dist[u] < stop) continue;  // to avoid tle
            dist[u]= stop;
            
            if(u == dst) return cost;
            if(stop > k) continue;
            
            for(auto child : g[u]){
                auto [v,w] = child;
                pq.push(make_tuple(cost + w,v, stop+1));
            }
        }
        return -1;
    }
};
