#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 100001;
const int mod = 1e9+7;
//----------------------
int N, M, dp[2][sz], a[sz], b[sz]; 

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);
    cin>>N; for(int i=1; i<=N; i++) cin>>a[i];
    for(int i=2; i<=N; i++) cin>>b[i];
    dp[0][0] = 1;
    for(int j=1; j<=N; j++){
        dp[0][j] = (dp[0][j-1]*(a[j]+b[j]))%mod + (dp[1][j-1]*(a[j]+b[j]-1))%mod;
        dp[1][j] = (dp[0][j-1]*b[j+1])%mod + (dp[1][j-1]*b[j+1])%mod;
    }
    cout<<dp[0][N]%mod<<'\n';

}

/*

dp[i][j] = the number of ways to do assign first j tasks using/not using the ith ambiguous task
dp[0][j] = dp[0][j-1]*(a+b) + dp[1][j-1]*(a+b-1)
dp[1][j] = dp[0][j-1]*b + dp[1][j-1]*bnxt

*/
