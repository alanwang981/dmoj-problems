#include<bits/stdc++.h>
using namespace std;
#define int long long
const int sz = (int)3e5+1;
//--------------------
int n, cnt, s[sz], ans[sz], t; deque<int> dq; set<int> remain;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n; memset(ans, -1, sizeof ans); for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++) {
        cin>>t; dq.push_back(t);
    } sort(dq.begin(), dq.end());

    for(int i=1; i<n-1; i++){ // local extrema
        if(s[i-1] < s[i] && s[i] > s[i+1]){
            ans[i] = dq.back(); dq.pop_back();
        } else if(s[i-1] > s[i] && s[i] < s[i+1]){
            ans[i] = dq.front(); dq.pop_front();
        }
    }
    if(s[0] < s[1]){ // endpoints
        ans[0] = dq.front(); dq.pop_front();
    } else{
        ans[0] = dq.back(); dq.pop_back();
    } if(s[n-1] < s[n-2]){
        ans[n-1] = dq.front(); dq.pop_front();
    } else{
        ans[n-1] = dq.back(); dq.pop_back();
    }
    while(!dq.empty()){ // fill in the rest
        remain.insert(dq.front()); dq.pop_front();
    } for(int i=1; i<n-1; i++) if(ans[i] == -1){ 
        auto x = remain.lower_bound(ans[i-1]);
        if(s[i] > s[i-1]){
            ans[i] = *x; remain.erase(x);
        } else{
            x--; ans[i] = *x; remain.erase(x);
        }
    } for(int i=1; i<n; i++) cnt += abs(ans[i-1]-ans[i]);
    cout<<cnt<<'\n'; for(int i=0; i<n; i++) cout<<ans[i]<<' ';
}

/*
total niceness = sum(local max - local min)
imple: add Mirko's planks to deque and sort
loop through Slavko's planks, if found local min, pop front
    if found local max, pop back
loop again to fill in the rest*
*/