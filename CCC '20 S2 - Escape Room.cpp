#include <bits/stdc++.h>
using namespace std;
//-----------------------

int m, n, t; bool vis[1000001]; queue<int> q; vector<int> vec[1000001];

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>m>>n;
	for(int i=1; i<=m; i++) for(int j=1; j<=n; j++){cin>>t; vec[i*j].push_back(t);}
	q.push(1); vis[1] = true;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int x:vec[cur]){
					if(!(vis[x])){q.push(x); vis[x] = true;}
        }
    }
    if(vis[m*n]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

	return 0;
}
