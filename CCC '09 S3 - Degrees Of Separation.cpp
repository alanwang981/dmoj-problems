#include <bits/stdc++.h>
using namespace std;
//-----------------------

int a[22] = {1, 2, 6, 3, 4, 5, 3, 4, 7, 3, 3, 8, 9, 9, 15, 12, 12, 11, 13, 16, 16, 18};
int b[22] = {6, 6, 7, 6, 6, 6, 4, 5, 8, 5, 15, 9, 10, 12, 13, 13, 11,10, 14, 18, 17, 17};
int adj[50][50], x, y;  char c;


void bfs(int x, int y){ // stolen bfs template cuz I always steal function templates
    int dis[50]; bool vis[50]; queue<int> q;
    memset(vis, 0, sizeof(vis));
    q.push(x); vis[x] = 1;  dis[x] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v=1; v<50; v++)
            if(adj[u][v] == 1 && !vis[v]){
                q.push(v); vis[v]=1; dis[v] = dis[u]+1;
            }
    }
    if(vis[y]) cout<<dis[y]<<endl;
    else cout<<"Not connected"<<endl;
}


int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
    for(int i=0; i<22; i++) adj[b[i]][a[i]] = adj[a[i]][b[i]] = 1;

    while(cin>>c && c != 'q'){

        if(c == 'i'){cin>>x>>y; adj[x][y] = adj[y][x] = 1;}

        else if(c == 'd'){cin>>x>>y; adj[x][y] = adj[y][x] = 0;}

        else if(c == 'n'){
            cin>>x; int ans = 0;
            for(int i=1; i<50; i++) ans += adj[x][i];
            cout<<ans<<endl;
        }
        else if(c == 'f'){
            cin>>x; vector<int> f; set<int> s;
            for(int i=1; i<50; i++){
                if(adj[x][i] == 1) f.push_back(i);
            }
            for(int y: f){
                for(int i=1; i<50; i++){
                    if(adj[y][i]==1 && adj[x][i]!=1 && x!=i) s.insert(i);
                }
            }
            cout<<s.size()<<endl;
        }
        else if(c == 's'){
            cin>>x>>y; bfs(x, y);
        }
    }
}
