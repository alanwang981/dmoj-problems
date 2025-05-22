#include <bits/stdc++.h>
using namespace std;
//#define int long long
//-----------------------

int c, r, x, y, a=0, b=0;

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>c>>r;
	while(true){
		cin>>x>>y;
		if(x == 0 && y == 0) break;
		a += x; b += y;
		if(a > c) a = c;
		if(b > r) b = r;
		if(a < 0) a = 0;
		if(b < 0) b = 0;
		cout<<a<<' '<<b<<endl;
	}

}
