#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 100001;
//----------------------
int N, c, dp[2][sz], sum; 

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);
    cin>>N; dp[0][0] = 1;
    for(int i=1; i<=N; i++){
        cin>>c; sum += c; 
        for(int j=0; j<c; j++) dp[1][j] = dp[0][j];
        for(int j=c; j<sz; j++) dp[1][j] = dp[0][j]+dp[0][j-c];
        swap(dp[0], dp[1]);
    }
    for(int j=0; j<=sum; j++) cout<<dp[0][j]<<' '; cout<<'\n';
    for(int j=sum; j>=0; j--){
        if(dp[0][j] >= 2){
            cout<<sum-j<<'\n'; return 0;
        }
    }

}

/*

split into two equal parts, divide by 2, then add the rest
dp[i][j][k] = number of ways to get a sum of j using first i notes when giving k notes to one person
find highest j where dp[N][j][k] >= 2

dp[i][j] = dp[i-1][j]+dp[i-1][j-c[i]]
dp[i][j][k] = 

*/
