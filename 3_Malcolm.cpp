#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 300001;
//--------------------------
int n, k, cnt; string s; vector<vector<int>> l(21); 

signed main(){
    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n>>k; for(int i=1; i<=n; i++){
        cin>>s; l[s.size()].push_back(i);
    } for(auto vec : l){
        n = vec.size(); for(int i=0; i<n; i++){
            auto nxt = upper_bound(vec.begin(), vec.end(), vec[i]+k);
            cnt += nxt-vec.begin()-i-1;
        }
    }
    cout<<cnt<<'\n';
}

/*
group by length of names
1. within K units
2. same l


*/