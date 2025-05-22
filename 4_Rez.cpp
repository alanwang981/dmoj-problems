#include <bits/stdc++.h>
using namespace std;
//---------------------
double k;

signed main(){

    cin>>k; int n = ceil(sqrt(2*(k-1)+0.25)-0.5); cout<<n<<'\n'; 
    for(int i=1; i<=n; i++){
        cout<<5000-i<<" 5000 5000 "<<-5000+i<<'\n';
    }

}

/*
10000x10000 square
2(k-1) <= n(n+1) = n^2+n = (n+0.5)^2-0.25
sqrt(2*(k-1)+0.25)-0.5
cuts:
-5000, 5000 / 5000, -5000
-5000, -5000+i / 5000, 5000-i*(i+1)/2
*/