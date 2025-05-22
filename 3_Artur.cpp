#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 5001;
//-----------------------

int n, a, b, c, d, in[sz], coords[sz][4]; 
vector<vector<int>> adj(sz); queue<int> q; 
// 1-indexed

signed main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // input
    cin>>n; for(int i=1; i<=n; i++){
        cin>>a>>b>>c>>d; coords[i] = {a, b, c, d};
    }

    return 0;
}
/*
toposort + cancer input

loop through the sticks, then for each stick, loop through all sticks to check which ones are under it (meeth)
toposort as normal

*/