#include<bits/stdc++.h>
using namespace std;
const int sz = (int)1e5+1;
//--------------------
int n, cnt, pos[sz], neg[sz], t;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n; for(int i=0; i<n; i++) cin>>pos[i];
    for(int i=0; i<n; i++){
        cin>>t; pos[i] -= t; if(pos[i] < 0){
            neg[i] = -1*pos[i]; pos[i] = 0;
        } else neg[i] = 0;
    } for(int i=0; i<n-1; i++){
        cnt += max(0, pos[i]-pos[i+1])+max(0, neg[i]-neg[i+1]);
        // cout<<pos[i]<<' '<<neg[i]<<'\n';
    } cnt += max(pos[n-1], neg[n-1]);
    cout<<cnt<<'\n';
}

/*
sus constraints O(N^2)?

potential O(N) sol:
seperate into pos and neg
imple: have one array replacing neg with 0 and one replacing pos with 0
everytime there is a decrease, add 1
*/