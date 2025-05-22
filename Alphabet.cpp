#include<bits/stdc++.h>
using namespace std;

int M, dp[27][51]; string a = " abcdefghijklmnopqrstuvwxyz", b;

int recurse(int i, int j){
    if(dp[i][j] == -1){
        if(i == 0 || j == 0) dp[i][j] = 0;
        else if(a[i] == b[j]) dp[i][j] = recurse(i-1, j-1)+1;
        else dp[i][j] = max(recurse(i-1, j), recurse(i, j-1));
    }
    return dp[i][j];
}

signed main(){

    cin>>b; M = b.size(); b = ' '+b;
    memset(dp, -1, sizeof dp);
    cout<<26-recurse(26, M)<<'\n';
}

/*

LCS


*/