#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------
int n, m, b, sum = 0, it = 0;

// targeted time complexity: O(N+M)
// determine each student's score in O(1)? time
// might have to multiply A_i by B_i

// k1 kids get 1, k2 kids get 2, k3 kids get 3, ...

// unpolished ideas:
// we only look at the last few elements of A and B
// find an interval where the sum is divisible by M?

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>m; int a[n], b[n]; vector<int> s(m, 0);

	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++){
		cin>>b[i];
		for(int j=0; j<b[i]; j++){
			if(it == m) it = 0;
			s[it] += a[i];
			it++;
		}
	}
	for(int i=0; i<m; i++){
		cout<<s[i]<<' ';
	}

	//cout<<'\n'<<"Some extra information:"<<'\n';
	//int sum = 0;
	//for(int i=0; i<n; i++){
	//	sum += a[i]*b[i];
	//	cout<<a[i]*b[i]<<' ';
	//}
	//cout<<'\n'<<sum<<'\n';

}



// subtask 2 -------------------------
//int n, m, b, sum = 0, q, r;
//signed main(){
//	cin>>n>>m; int a[n];
//	for(int i=0; i<n; i++) cin>>a[i];
//	for(int i=0; i<n; i++){
//		cin>>b; sum += b;
//	}	q = sum/m; r = sum%m;	int i=0;
//	for(; i<r; i++) cout<<q+1<<' ';
//	for(; i<m; i++) cout<<q<<' ';
//}
