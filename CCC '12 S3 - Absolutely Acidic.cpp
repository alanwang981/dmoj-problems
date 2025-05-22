#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, r, s; vector<pair<int, int>> vec; vector<int> vec2;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	for(int i=1; i<=2000; i++) vec.push_back({0, i});

	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>r; vec[r].first++;
	}sort(vec.begin(), vec.end()); reverse(vec.begin(), vec.end()); s = vec[1].first;

	for(int i=0; i<2000; i++){
		if(vec[i].first < s) break;
		if(vec[i].first == s) vec2.push_back(vec[i].second);
	}sort(vec2.begin(), vec2.end());

	if(vec[0].first == s) cout<<vec2[vec2.size()-1]-vec2[0]<<endl;
	else cout<<max(vec2[vec2.size()-1]-vec[0].second, vec[0].second-vec2[0])<<endl;


	return 0;
}
