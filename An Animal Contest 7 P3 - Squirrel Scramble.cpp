#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, m, t; long long ans = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>m; vector<int> vec(n-1), psa(n); vector<bool> p(n, false); psa[0] = 0;
	for(int i=0; i<m; i++){
		cin>>t; p[t-1] = true;
	}for(int i=0; i<n-1; i++){
		cin>>vec[i]; psa[i+1] = psa[i]+vec[i];
	}

	for(int i=0; i<n; i++){
		if(p[i] == false){for(int j=i+1; j<n; j++) ans += (psa[j]-psa[i]);}
		else{
			int f=i, l=i;
			for(int j=i+1; i<n; i++){
				if(p[j]){l=j; if(f==-1)f=j;}
			}
			ans += psa[f-1]-psa[i]; ans += psa[n-1]-psa[l]; ans--;
		}
	}
	cout<<ans%((int)1e9+7);

	return 0;
}
