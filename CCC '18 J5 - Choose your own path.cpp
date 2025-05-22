#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop for(int i=0; i<n; i++)
//-----------------------
// 1-indexed

int n, m, x, dis[10001], mn = 10001, cur; string ans = "Y"; vector<vector<int>> adj(10001); queue<int> q; bool isend[10001];


signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	cin>>n; for(int i=0; i<10001; i++) dis[i] = -1;
    for(int i=1; i<=n; i++){
        cin>>m; 
		if(m == 0) isend[i] = true;
		else{
			isend[i] = false;
			while(m--){
		    	cin>>x; adj[i].push_back(x);
	    	}
		}
        
    } // for(int i=1; i<=n; i++){for(auto a : adj[i]) cout<<a<<' '; cout<<endl;}
	
	q.push(1); dis[1] = 1;
	while(!q.empty()){
		cur = q.front(); q.pop();
		for(int neighbor : adj[cur]){ // loop through all adjacent elements of the current node
			if(dis[neighbor] == -1){
				dis[neighbor] = dis[cur]+1;
				q.push(neighbor);
			}
		} 
	}
    for(int i=2; i<=n; i++){
		if(dis[i] == -1) ans = "N";
		else{
			if(isend[i] && dis[i] < mn) mn = dis[i];
		}
	} if(mn == 10001) mn = 1;
	cout<<ans<<'\n'<<mn<<'\n';

} 
