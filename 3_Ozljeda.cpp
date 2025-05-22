#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 200003;
//--------------------------
int k, q, pxa[sz], a, l, r;

signed main(){
    cin.tie(0); ios::sync_with_stdio(0);
    
    cin>>k; for(int i=1; i<=k; i++){
        cin>>a; pxa[i] = pxa[i-1]^a;
    } for(int i=0; i<k; i++) pxa[i+k+1] = pxa[i];
    cin>>q; while(q--){
        cin>>l>>r; l %= k+1, r %= k+1; if(l == 0) l = k+1;
        while(r < l) r += k+1;
        cout<<(pxa[r]^pxa[l-1])<<'\n';
    }
}


/*
prefix xor array! (PXA?)


a1, a2, ..., ak, a1^a2^...^ak, a1, a2, ..., ak, a1^a2^...^ak, ... pattern continues

1 2 3 4 5 X 1 2 3 4 5 X
*/