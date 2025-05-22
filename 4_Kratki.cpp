#include <bits/stdc++.h>
using namespace std;
#define int long long
//---------------------
int n, k, start;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n>>k; if(k*k < n){
        cout<<"-1\n"; return 0;
    } start = n;
    while(true){
        for(int i=max((int)1, start-k+1); i<=start; i++){
            cout<<i<<' '; 
        }
        start -= k;
        if(start <= 0) break;
    }
    cout<<'\n';
}

/*
take last K numbers from 1 to N
then alternate for first N-K numbers
13 14 15 16
9 10 11 12
5 6 7 8
1 2 3 4
*/