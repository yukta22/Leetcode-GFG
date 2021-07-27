//https://www.geeksforgeeks.org/number-of-triangles-in-directed-and-undirected-graphs/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
const long long MOD = 1e9 + 7;


void solve(){
    int V = 4;
    int graph[][V] = {  {0, 1, 1, 0},
                        {1, 0, 1, 1},
                        {1, 1, 0, 1},
                        {0, 1, 1, 0}
                      };

    bool isDirected = false;
    int count_Triangle = 0;

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            for (int k = 0; k < V; k++)
            {
               
               if (graph[i][j] && graph[j][k]  && graph[k][i])
                  count_Triangle++;
             }
        }
    }

    if(isDirected) count_Triangle /= 3;
    else count_Triangle /= 6;

    cout<<count_Triangle<<endl;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

    solve();
 
    return 0;
}

