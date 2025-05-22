#include<bits/stdc++.h>
using namespace std;
const int sz = 5001;

int N, M, dp[sz][sz][2], a[sz], b[sz]; 

int recurse(int i, int j, int k){
    if(dp[i][j][k] == -1){
        dp[i][j][k] = 10000000;
        if(!k && i > 0) dp[i][j][0] = min(recurse(i-1, j, 0)+(a[i]+a[i-1]+1)%2, recurse(i-1, j, 1)+(a[i]+b[j]+1)%2)+1; 
        else if(k && j > 0) dp[i][j][1] = min(recurse(i, j-1, 0)+(a[i]+b[j]+1)%2, recurse(i, j-1, 1)+(b[j]+b[j-1]+1)%2)+1;
    }
    return dp[i][j][k];
}

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);
    cin>>N; for(int i=1; i<=N; i++) cin>>a[i];
    cin>>M; for(int i=1; i<=M; i++) cin>>b[i];
    memset(dp, -1, sizeof dp); dp[0][0][0] = dp[0][0][1] = 0;
    cout<<min(recurse(N, M, 0), recurse(N, M, 1))<<'\n';
}

/*

dp[i][j][k] = min largest number using first i from arr 1 and first j from arr 2 when largest number is in arr k
dp[i][j][0] = min(dp[i-1][j]) + 1 or 2
dp[i][j][1] = min(dp[i][j-1]) + 1 or 2

*/