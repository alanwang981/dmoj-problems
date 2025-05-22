#include <bits/stdc++.h>
using namespace std;
//----------------------
int T, N, a[501], dp[501][5001];
int breaktime[501], cur; 

int recurse(int i, int j){
    if(dp[i][j] == -1){
        if(recurse(i-1, j) == 1) dp[i][j] = 1;
        else if(j >= a[i] && recurse(i-1, j-a[i]) == 1){
            dp[i][j] = 1; breaktime[i] = j-a[i];
        } else dp[i][j] = 0;
    } return dp[i][j]; 
}

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);
    memset(dp, -1, sizeof dp); memset(breaktime, -1, sizeof breaktime);
    cin>>T>>N; 
    dp[0][0] = 1; for(int j=1; j<=T; j++) dp[0][j] = 0;
    for(int i=1; i<=N; i++) cin>>a[i];
    recurse(N, T);
    for(int i=1; i<=N; i++){
        if(breaktime[i] != -1) cout<<breaktime[i]<<' ';
        else{
            cout<<cur<<' '; cur += a[i];
        }
    }
}

/*

bijection to splitting an array into two sums such that they are as equal as possible
want to have one sum as close to T as possible without exceeding it
dp[i][j] = if first i elements can sum to j
dp[i][j] = 1 if dp[i-1][j] = 1 or dp[i-1][j-a] = 1

find the largest j <= T | dp[N][j] = true and trace back

*/