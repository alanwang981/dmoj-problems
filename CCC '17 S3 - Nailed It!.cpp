#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, t, mx = 0, cnt = 0; vector<int> vec(2002, 0), l(4002, 0);

int main(){

    cin>>n;
    while(n--){
        cin>>t; vec[t]++;
    }
    for(int i=0; i<2002; i++) for(int j=i; j<2002; j++){
        if(i == j) l[i+j] += vec[i]/2;
        else l[i+j] += min(vec[i], vec[j]);
    }
    for(int x:l){
        if(x > mx) mx = x;
    }
    for(int x:l){
        if(x == mx) cnt++;
    }
    cout<<mx<<' '<<cnt<<'\n';

    return 0;
}
