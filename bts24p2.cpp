#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------
int n, m, b, it = 0;


signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>m; int a[n]; vector<int> s(m, 0);
	vector<int> d(m+1); d[0] = s[0], d[m] = 0; for(int i=1; i<m; i++) d[i] = s[i] - s[i-1]; // DSA

	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++){
		cin>>b;
		// in the commented code below, we loop through 1 to b and update each student seperately
		// we keep it as the student number
		//for(int j=0; j<b; j++){
		//	if(it == m) it = 0;
		//	s[it] += a[i];
		//	it++;
		//}
		// to optimize, we can use DSA to update an interval instead
		// account for going back to the first student using it
        d[it] += a[i];
        if(b+it <= m){
            d[it+b] -= a[i]; it += b;
        }
        else{
            d[m] -= a[i]; it = b+it-m;
            d[0] += a[i]; d[it] -= a[i];
        }
	}

    for(int i=0; i<m; i++){
        if(i == 0) s[i] = d[i];
        else s[i] = d[i] + s[i-1];
        cout<<s[i]<<' ';
    }

}
