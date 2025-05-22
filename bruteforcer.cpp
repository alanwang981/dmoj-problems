#include <bits/stdc++.h>
using namespace std; 
#define int long long
//-----------------------
int n, x, y, dis[500001], farnode = 1, farfarnode; 
vector<vector<int>> adj(500001); 
// 1-indexed

void dfs(int cur){
    for(int nxt : adj[cur]) if(dis[nxt] == -1){
        dis[nxt] = dis[cur]+1; dfs(nxt);
    }
}


signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    // inputs
    cin>>n; for(int i=1; i<n; i++){
        cin>>x>>y; adj[x].push_back(y); adj[y].push_back(x);
    } 
    
    for(int i=1; i<=n; i++){
        memset(dis, -1, sizeof dis); dis[i] = 1; dfs(i); int mx = 0;
        for(int j=0; j<=n; j++) mx = max(dis[j], mx); 
        cout<<mx<<'\n';
    }
}

/*
find max distance given i is node 1... within O(N) time

idea: find diameter! for each i, the answer is max(dis[i], diameter-dis[i]+1), where dis is from furthest node
*/