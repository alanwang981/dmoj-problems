#include <bits/stdc++.h>
using namespace std;
//------------------------------------------
int t=5, n, x, y, vis[101], dis[101], cycle; vector<vector<int>> adj(101);

void dfs(int cur){
    vis[cur] = 1;
    for(int nxt: adj[cur]){
        if(!vis[nxt]){
            dis[nxt] = dis[cur]+1; dfs(nxt);
        }else if(vis[nxt] == 1){
            cycle = dis[cur]-dis[nxt]+1;
        }
    }
    vis[cur] = 2;
}


signed main() {

    cin.tie(0); ios::sync_with_stdio(0);

    while(t--){
        cin>>n; for(int i=0; i<101; i++) adj[i].clear();
        memset(vis, 0, sizeof vis); memset(dis, 0, sizeof dis);

        for(int i=0; i<n; i++){
            cin>>x>>y; adj[x].push_back(y); 
        } dfs(1); cout<<cycle<<'\n';
    }

}