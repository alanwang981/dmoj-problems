#include <bits/stdc++.h>
using namespace std;
//-----------------------

int t, n, cnt, p; vector<pair<int,int>> vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>t>>n;
	for(int i=0; i<n; i++){
        cin>>p; vec.push_back({abs(p), p});
	}

    sort(vec.begin(), vec.end()); p = 0; cnt = 0;
    for(int i=0; i<n; i++){
        cnt+=abs(p-vec[i].second); p=vec[i].second;
        if(cnt > t){n = i; break;}
    }

    cout<<n;

	return 0;
}
