#include <bits/stdc++.h>
using namespace std;
//-----------------------

int a, b, c, d, dis[9][9]; bool vis[9][9]; queue<pair<int, int>> q;
int dir[8][2] = {{-2, -1}, {-2, -1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>a>>b>>c>>d; q.push({a, b}); vis[a][b] = 0; dis[a][b] = 0;
    while(!q.empty()){
        pair<int, int> u = q.front(); q.pop();
        for(int v=0; v<8; v++){
            int x = u.first+dir[v][0]; int y = u.second+dir[v][1];
            if(x>=1 && x<=8 && y>=1 && y<=8 && !vis[x][y]){q.push({x, y}); vis[x][y]=1; dis[x][y] = dis[u.first][u.second]+1;}
        }
    }
    cout<<dis[c][d]<<endl;

	return 0;
}
