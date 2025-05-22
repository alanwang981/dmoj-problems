#include <bits/stdc++.h>
using namespace std;
//#define int long long
//-----------------------

int w, n, t=0;

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>w>>n; vector<int> vec(n);
	for(int i=0; i<n; i++) cin>>vec[i];
	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=0; j<min(4, n-i); j++){
			sum += vec[i+j];
			if(sum > w){cout<<i+j<<'\n'; return 0;}
		}
	}
	cout<<n<<'\n';

}
