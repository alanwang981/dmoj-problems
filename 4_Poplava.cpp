#include<bits/stdc++.h>
using namespace std;
#define int long long
//-------------------------
int n, x, a[1000001]; 

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n>>x; if(2*x > (n-1)*(n-2)){
        cout<<"-1\n"; return 0;
    } int m = ((n-1)*(n-2))/2-x;
    for(int i=n-2; i>0; i--){
        if(i <= m){
            m -= i; a[n-i-1] = 1; if(!m) break;
        }
    } for(int i=1; i<=n; i++){
        if(a[i]) cout<<i<<' ';
    } cout<<n<<' '; for(int i=1; i<n; i++){
        if(!a[i]) cout<<i<<' ';
    }


}
/*
regions of water are bounded by min(local maxs)

max reachable X = (N-1)(N-2)/2
h: N 1 2 3 ... N-1
v: 0 N-2 N-3 ... 1 0
take out max_X-X, put them in front and sort in ascending
let m = max_X-X
find: a subset of v that adds to m
imple: iterate from v_max, move it and decrease m by that element until m is 0

*/