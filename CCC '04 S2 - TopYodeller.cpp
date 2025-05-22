#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, k, t, y;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>k; vector<pair<int, int>> vec(n, {0, 0}); //(#ofpoints, lowestrank)
	for(int i=0; i<k; i++){
		vector<pair<int, int>> vec2; //(#ofpoints, contestant#)
		for(int j=1; j<=n; j++){
			cin>>t; vec[j-1].first += t; vec2.push_back({t, j});
		}sort(vec2.begin(), vec2.end());
		for(int i=0; i<n; i++){
			if(i+1 > vec[vec2[i].second].second) vec[vec2[i].second].second = i+1;
		}
	}t = -1000;
	for(int i=0; i<n; i++){
		if(vec[i].first > t) t = vec[i].first;
	}
	for(int i=0; i<n; i++){
		if(vec[i].first == t) cout<<"Yodeller "<<i+1<<" is the TopYodeller: score "<<t<<", worst rank "<<vec[i].second<<'\n';
	}


	return 0;
}
