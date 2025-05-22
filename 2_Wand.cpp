#include <bits/stdc++.h>
using namespace std;
//------------------------------------------

int n, m, x, y, vis[100001]; vector<vector<int>> adj(100001);

void dfs(int cur){
    if(cur != 1) vis[cur] = 1;
    for(int nxt: adj[cur]){
        if(nxt == 1) vis[1] = 1;
        if(!vis[nxt]) dfs(nxt);
    }
}

signed main() {

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n>>m; while(m--){
        cin>>x>>y; adj[y].push_back(x);
    }
    if(adj[1].empty()) vis[1] = 1;  
    else dfs(1);
    for(int i=1; i<=n; i++) cout<<vis[i];
    cout<<'\n';

}

/*

transfer of wand can be modelled by directed graph
see which nodes are visited

*/