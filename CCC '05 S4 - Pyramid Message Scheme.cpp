#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------
//ans = old way - max depth*2*10

int l, n;

signed main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>l;
    while(l--){
        cin>>n; vector<string> vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int dep = 0, cur = -1; unordered_map<string, int> mp;
        for(int i=n-1; i>=0; i--){
            if(!mp.count(vec[i])){mp[vec[i]] = ++cur; dep = max(dep, cur);}
            else cur = mp[vec[i]];
        }
        cout<<10*n-20*dep<<'\n';
    }

    return 0;
}
