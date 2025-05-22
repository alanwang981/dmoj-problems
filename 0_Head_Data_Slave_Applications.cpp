#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 501;
const int mod = (int)1e9+7;
//---------------------
int k, m, choose[501][501], ans, pre;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    choose[0][0] = 1;
    for(int i=0; i<501; i++){
        choose[i][0] = choose[i][i] = 1;
        for(int j=1; j<i; j++) choose[i][j] = (choose[i-1][j-1] + choose[i-1][j])%mod;
    }
    cin>>k>>pre; ans = 1; 
    for(int i=1; i<k; i++){
        cin>>m; ans = (ans*choose[pre+m-1][pre])%mod;
        pre += m;
    }
    cout<<ans<<'\n';
}

/*
1111222
______2
between every pair: (m_i+m_{i+1}-1) choose m_i

*/