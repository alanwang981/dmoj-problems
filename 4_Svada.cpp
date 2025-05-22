#include <bits/stdc++.h>
using namespace std; 
#define int long long
const int sz = 102;
//---------------------
int t, m, n, cur, a[sz], b[sz], c[sz], d[sz]; 

signed main(){
    cin.tie(0); ios::sync_with_stdio(0);

    cin>>t>>n; for(int i=0; i<n; i++) cin>>a[i]>>b[i];
    cin>>m; for(int i=0; i<m; i++) cin>>c[i]>>d[i];
    int lo = 1, hi = t, t2 = (lo+hi)/2, c1, c2;
    while(lo < hi){
        c1 = 0, c2 = 0;
        for(int i=0; i<n; i++){
            if(t2-a[i] >= 0) c1 += 1+(t2-a[i])/b[i];
        } 
        for(int i=0; i<m; i++) if(t-t2-a[i] >= 0) c2 += 1+(t-t2-c[i])/d[i];
        if(c1 == c2) break;
        else if(c1 > c2) hi = t2; // t1 too big
        else lo = t2+1;
        t2 = (lo+hi)/2;
    }
    cout<<t2<<'\n';
}


/*
bsearch for t1

how many coconuts with this amt of time

*/