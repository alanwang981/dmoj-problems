#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------



signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	for(int n=1000; n<10000; n++){
		int s=1;
		for(int f=2; f<=sqrt(n); f++){
			if(!(n%f))s += (f+n/f);
		}
		if(s == n) cout<<n<<' ';
	}
	cout<<endl;
	for(int n=100; n<1000; n++){
		string s = to_string(n);
		int d1 = s[0]-'0'; int d2 = s[1]-'0'; int d3 = s[2]-'0';
		if(d1*d1*d1+d2*d2*d2+d3*d3*d3 == n) cout<<n<<' ';
	}

}
