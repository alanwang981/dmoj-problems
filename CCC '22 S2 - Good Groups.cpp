#include <bits/stdc++.h>
using namespace std;
//-----------------------

int x, y, g, t1, t2; unordered_map<string, int> mp; string a, b, c; int ans = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>x; string vec1[x][2];
	for(int i=0; i<x; i++) cin>>vec1[i][0]>>vec1[i][1];
	cin>>y; string vec2[y][2];
	for(int i=0; i<y; i++) cin>>vec2[i][0]>>vec2[i][1];
	cin>>g;
	for(int i=0; i<g; i++){
		cin>>a>>b>>c; mp[a] = mp[b] = mp[c] = i;
	}
	for(int i=0; i<x; i++){
		a = vec1[i][0]; b = vec1[i][1];
		if(mp[a] != mp[b]) ans++;
	}
	for(int i=0; i<y; i++){
		a = vec2[i][0]; b = vec2[i][1];
		if(mp[a] == mp[b]) ans++;
	}
	cout<<ans;

	return 0;
}
