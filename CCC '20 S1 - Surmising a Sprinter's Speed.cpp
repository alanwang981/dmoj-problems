#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n; double t, x; vector<pair<double, double>> vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){cin>>t>>x; vec.push_back({t, x});}

	sort(vec.begin(), vec.end()); x = 0;

	for(int i=1; i<n; i++){
        t = abs(vec[i].second-vec[i-1].second)/(vec[i].first-vec[i-1].first); if(t > x) x = t;
	}

    cout<<x;

	return 0;
}
