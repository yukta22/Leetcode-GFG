//https://www.geeksforgeeks.org/two-clique-problem-check-graph-can-divided-two-cliques/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
const long long MOD = 1e9 + 7;

int f = 0;
void bipartite(int src,int par,int col,vector<int> &color,vector<int> g[]){
    color[src] = col;

    for(auto x : g[src]){
        if(!color[x]){
            bipartite(x,src, 3-col,color,g);
        }
        else if(x!= par && col == color[x]){
            f = 1;
            break;
        }

    }

}


void solve(){

    int v,e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i = 0 ; i < e ; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector<int> reverse[v];
    vector<int> dummy(v,0);

    for(int i = 0 ; i<v; i++){
        dummy[i] = 1;
        for(auto x : g[i]){
            dummy[x] = 1;
        }
        for(int j = 0 ; j < v ;j++){
            if(dummy[j] == 0){
                reverse[i].push_back(j);
                reverse[j].push_back(i);
            }            
        }
        dummy.clear();
    }

    vector<int> color(v,0);
    bipartite(0,0,1,color,reverse);

    if(!f) cout<<"Two Clique";
     else cout<<"Not possible";

}


signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

    solve();
    
    return 0;
}

