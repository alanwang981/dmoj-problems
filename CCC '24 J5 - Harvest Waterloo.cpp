#include <bits/stdc++.h>
using namespace std;
//-----------------------

int r, c, a, b; vector<pair<int, int>> dirs{{1,0},{0,1},{-1,0},{0,-1}}; string s; map<char, int> pt = {{'S', 1}, {'M', 5}, {'L', 10}};

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
	int x, y, ans;
	cin>>r>>c; char grid[r][c]; bool vis[r][c];
	for(int i=0; i<r; i++){
		cin>>s; 
		for(int j=0; j<c; j++){
			grid[i][j] = s[j]; vis[i][j] = false;
		}
	} cin>>a>>b;
	queue<pair<int, int>> q; q.push({a, b}); vis[a][b] = true; ans = pt[grid[a][b]];
	while(!q.empty()){
		pair<int, int> cur = q.front(); q.pop();
		for(auto dir : dirs){ // loop through all adjacent elements of the current node
            x = cur.first+dir.first; y = cur.second+dir.second;
			if(x>=0 && y >=0 && x<r && y<c && !vis[x][y] && grid[x][y] != '*'){
				vis[x][y] = true; q.push({x, y});
				ans += pt[grid[x][y]];
			}
		}
	}
	cout<<ans<<'\n';

}
