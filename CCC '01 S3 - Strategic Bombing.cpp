#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------

int adj[27][27], cnt; vector<string> vec; string s;

bool bfs(int fir, int lst){
    queue<int> q; vector<bool> vis(26, false);
    q.push(fir); vis[fir]=1;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(int v=0; v<26; v++) {
            if(!vis[v] && adj[u][v]){q.push(v); vis[v]=1;}
        }
        if(vis[lst]) return true;
    }
    return false;
}

signed main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    while(true){
        cin >>s;
        if(s == "**") break;
        vec.push_back(s); int u = s[0]-'A', v = s[1]-'A'; adj[u][v] = adj[v][u] = 1;
    }

    for(string s:vec){
        int u = s[0]-'A', v = s[1]-'A';
        adj[u][v] = adj[v][u] = 0;
        if(!bfs(0, 1)){cout<<s<<'\n'; cnt++;}
        adj[u][v] = adj[v][u] = 1;
    }
    cout<<"There are "<<cnt<<" disconnecting roads.\n";

    return 0;
}
