#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------

map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
string s; int n, cur; int pre = 0, sum = 0;

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>s; n = s.size()/2;
	for(int i=n-1; i>=0; i--){
		cur = mp[s[2*i+1]];
		if(pre > cur) sum -= (s[2*i] - '0')*cur;
		else sum += (int)(s[2*i] - '0')*cur;
		pre = cur;
	}

	cout<<sum<<'\n';

}
