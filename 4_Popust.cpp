#include <bits/stdc++.h>
using namespace std;
//------------------------
int n, a, b, mndif = INT_MAX; vector<pair<int, int>> minB; multiset<int> minA; long long cost;

signed main(){
    cin.tie(0); ios::sync_with_stdio(0);
    minB.push_back({0, 0});
    cin>>n; for(int i=1; i<=n; i++){
        cin>>a>>b; minB.push_back({b, a}); minA.insert(a); 
    } sort(minB.begin(), minB.end());
    for(int k=1; k<=n; k++){
        cost += minB[k].first; 
        mndif = min(mndif, minB[k].second-minB[k].first); 
        cout<<min(cost+*minA.begin()-minB[k].first, cost+mndif)<<'\n';
        minA.erase(minA.lower_bound(minB[k].second)); // used
    }
}

/*
first take min A
then take smallest Bs until they include the min A
the k-1 smallest Bs + the smallest A (which either has a B not in the first k-1 or has the least A-B)

sum + Anew-Aold + Bnew-Bold
take firt k smallest B + min diff between A and B
B1+...+Bk + Ai - Bi, if i < k
or B1+...+Bk-1 + Ai, if i >= k
*/