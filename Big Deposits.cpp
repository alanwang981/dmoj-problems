#include <bits/stdc++.h>
using namespace std;
//#define int long long
//-----------------------

long long p, y, t;

bool bigger(long long n){

    long long t3 = 0;
    for(int i=0; i<y; i++){
        t3 += n; t3 += t3*p/100;
        if(t3 > t){
            return true;
        }
    }return t3 >= t;

}

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	cin>>p>>y>>t; long long lo = 1, n, hi = t, ans = t; // long long t1, t2; 
    while(lo <= hi){
        n = (hi+lo)/2; 
        // t1 = 0; t2 = 0;
        // for(int i=0; i<y; i++){
        //     t1 += n-1; t1 += t1*p/100;
        //     t2 += n; t2 += t2*p/100;
        //     if(t1 > t) break;
        // }
        // if(t1 > t){
        //     hi = n-1;
        // }else if(t2 < t){
        //     lo = n+1;
        // }else{
        //     cout<<n<<'\n'; break;
        // }
         if(bigger(n)){
             hi = n-1; ans = n;
         }else lo = n+1;
    }
    cout<<ans<<'\n';

}
