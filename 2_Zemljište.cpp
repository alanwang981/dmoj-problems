#include <bits/stdc++.h>
using namespace std;
#define int long long
const int sz = 501;
//---------------------
int r, s, a, b, c, g[sz][sz], psa[sz][sz], y, y2, mn = LLONG_MAX;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    // input and setup
    cin>>r>>s>>a>>b; if(a > b) swap(a, b); 
    for(int i=1; i<=r; i++) for(int j=1; j<=s; j++) cin>>g[i][j];
    for(int i=1; i<=r; i++){
        int row[s]; row[0] = 0;
        for(int j=1; j<=s; j++){
            row[j] = row[j-1]+g[i][j];
            psa[i][j] = row[j]+psa[i-1][j];
        } 
    }
    for(int x1=1; x1<=r; x1++) for(int x2=x1; x2<=r; x2++){
        y = 1, y2 = 1;
        while(true){
            int val = psa[x2][y2]-psa[x1-1][y2]-psa[x2][y-1]+psa[x1-1][y-1];
            mn = min(mn, abs(a-val)+abs(b-val));
            if(mn == b-a) goto label;
            if(y2 == s) break;
            if(val < a) y2++;
            else if(val > b) y++;
        }
    }label:;
    cout<<mn<<'\n';

}

/*
O(N^3)
2D PSA + two pointer
ideal price occurs when a <= c <= b, or when min(a-c, c-b) is minimized
min distance is b-a

psa[x2][y2] overshoots, x1 y1 is used to adjust the overshot
*/