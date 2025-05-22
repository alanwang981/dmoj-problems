#include <bits/stdc++.h>
using namespace std;
//-----------------------

int t, r, c, dis[22][22]; char g[22][22];
int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>t;
    for(int _=0; _<t; _++){
        cin>>r>>c;
        for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin>>g[i][j];

	    queue<pair<int, int>> q; memset(dis, 0, sizeof(dis)); q.push({0, 0}); dis[0][0] = 1;
        while(!q.empty()){
			int x=q.front().first, y=q.front().second; q.pop();
			int v = 0, h = 3;
			if(g[x][y] == '|') h = 1;
			if(g[x][y] == '-') v = 2;
			for(int i=v; i<=h; i++){
                int nr=x+d[i][0], nc=y+d[i][1];
                if(nr>=0 && nr<r && nc>=0 && nc<c && g[nr][nc]!='*' && dis[nr][nc]==0){q.push({nr, nc}); dis[nr][nc]=dis[x][y]+1;}
			}
        }
        if(dis[r-1][c-1] == 0) cout<<-1<<'\n';
        else cout<<dis[r-1][c-1]<<'\n';
    }

    return 0;
}
