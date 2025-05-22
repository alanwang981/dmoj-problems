#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, l, s, a, b, v;


void update(vector<int>& D, int l, int r, int x){
    D[l] += x; D[r+1] -= x;
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>l>>s; vector<int> vec(l, 0), dif(l+1, 0);
	for(int i=0; i<n; i++){
		cin>>a>>b>>v; update(dif, a, b, v);
	}

	for(int i=0; i<vec.size(); i++){
        if(i == 0) vec[i] = dif[i];
        else vec[i] = dif[i] + vec[i-1];
    }

    sort(vec.begin(), vec.end()); cout<<(lower_bound(vec.begin(), vec.end(), s)-vec.begin())<<'\n';

	return 0;
}
