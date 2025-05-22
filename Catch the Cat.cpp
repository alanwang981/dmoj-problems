#include <bits/stdc++.h>
using namespace std;
//-----------------------

int x, y; int dis[10005]; vector<bool> vis(10005, false); queue<int> q;


void bfs(int x, int y){ // stolen bfs template cuz I always steal function templates
    q.push(x); vis[x] = 1; dis[x] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v=1; v<10005; v++)
            if((2*u==v || abs(u-v)==1)&& !vis[v]){
                q.push(v); vis[v]=1; dis[v] = dis[u]+1;
            }
    }
    cout<<dis[y]<<endl;
}


int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>x>>y; bfs(x, y);

	return 0;
}
