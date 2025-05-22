#include<bits/stdc++.h>
using namespace std;
//--------------------
int n, m, p, c; vector<pair<int, int>> detect;
long long cnt;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n>>m; for(int i=0; i<n; i++){
        cin>>p>>c; detect.push_back({p, c});
    } sort(detect.begin(), detect.end()); // now .first no longer matters
    for(int i=0; i<n-1; i++) cnt += max(0, detect[i].second-detect[i+1].second);
    cnt += detect[n-1].second; cout<<cnt<<'\n';
}

/*
sum of all local max - local min
12342312

*/