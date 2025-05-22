#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = (int)1e5;
//-----------------------
int n, l, s, cnt, a, b, x, cur; 
vector<pair<int, int>> endpt = {{1, 0}};

signed main(){
	ios::sync_with_stdio(0); cin.tie(0);

	cin>>n>>l>>s; endpt.push_back({l+1, 0});
	for(int i=0; i<n; i++){
		cin>>a>>b>>x; endpt.push_back({a, x}); endpt.push_back({b+1, -x}); 
	} sort(endpt.begin(), endpt.end()); n = endpt.size();
    for(int i=1; i<n; i++){
        if(cur < s) cnt += endpt[i].first-endpt[i-1].first;
        cur += endpt[i].second;
    }
    cout<<cnt<<'\n';
}
/*
coord compression diff array

20 59
30 69
40 79

1 20 30 39 40 59 60 69 79 100
   444444444444
     4444444444444444
           4444444444444
0  4  8  8 12 12  8  4  0   0

1 3 5 7 10
  222
    222
0 2 4 2 

1 4 5 9 10

*/