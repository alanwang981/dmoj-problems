#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 200002;
//-----------------------

int n, m, a, b, in[sz]; vector<vector<int>> adj(sz);
queue<int> q; string g[sz]; vector<int> ans; 
// 1-indexed

signed main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>n>>m; while(m--){
        cin>>a>>b; // b must go before a
        adj[b].push_back(a); in[a]++;
    }
    for(int i=1; i<=n; i++) if(!in[i]){
        q.push(i); ans.push_back(i);
    }
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int nxt : adj[cur]){
            in[nxt]--; if(!in[nxt]){
                q.push(nxt); ans.push_back(nxt);
            }
        }
    }
    if(ans.size() < n) cout<<"-1\n";
    else{
        cout<<ans.size()<<'\n';
        for(int x : ans) cout<<x<<" 1\n"; 
    } 

    return 0;
}
/*
toposort
idea: charge all balls positively in some order
for any pair {a, b}, charge b before a
*/