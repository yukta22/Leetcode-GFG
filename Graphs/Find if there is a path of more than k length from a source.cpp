//https://www.geeksforgeeks.org/find-if-there-is-a-path-of-more-than-k-length-from-a-source/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
const long long MOD = 1e9 + 7;


bool solve(int src, int k,vector<pair<int,int>> g[],vector<bool> &vis){

    vis[src] = true;
    if(k <= 0) return true;

    for(auto x : g[src]){
        int u = x.first;
        int w = x.second;

        if(vis[u] == true) continue;

        if(w >= k)  return true;

        if(solve(u,k-w,g,vis))  return true;
 
    }

    vis[src] = false;
    return false;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

    int v,e;
    cin>>v>>e;

    int k;
    cin>>k;

    vector<pair<int,int>> g[v+1];

    for(int i = 0 ; i < e ;i++){
        int x,y,w;
        cin>>x>>y>>w;
        g[x].push_back({y,w});
        g[y].push_back({x,w});

    }

    vector<bool> vis(v+1,false);

    cout<<solve(1,k,g,vis);
    
    return 0;
}

