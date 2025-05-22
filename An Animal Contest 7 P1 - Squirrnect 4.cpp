#include <bits/stdc++.h>
using namespace std;
//-----------------------

long long t, a, b;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>t;
	for(int i=0; i<t; i++){
		cin>>a>>b;
		if(a<4 && b<4) cout<<"bad"<<'\n';
		else if(a == 1) cout<<"bad"<<'\n';
		else if(a < 7 && b == 1) cout<<"bad"<<'\n';
		else cout<<"good"<<'\n';
	}

	return 0;
}
