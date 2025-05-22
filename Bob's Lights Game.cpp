#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, m, x1, x2;


void update(vector<int>& D, int l, int r){
    D[l-1]++; D[r]--;
}


int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>m; vector<int> vec(n, 0), dif(n+1, 0);
	for(int i=0; i<m; i++){
        cin>>x1>>x2; update(dif, x1, x2);
	}

	for(int i=0; i<n; i++){
        if(i == 0) vec[i] = dif[i];
        else vec[i] = dif[i]+vec[i-1];
	}

	int cnt = 0;
    for(int&i:vec){
        if(i%2) cnt++;
    }

    cout<<cnt<<'\n';

	return 0;
}
