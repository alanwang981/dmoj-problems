#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define sec second
#define nl "\n"
typedef long long ll; typedef vector<int> vi; typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL; const int mod = 1e9+7; const double PI = 3.1415926535897932384626433832795;
//-----------------------end----------------------------

int t, n, s;

int findmax(vi a, int c){
    int k = a.size(); ll m;
    if(c % 2){
        int frst = 0; int lst = 0; bool b = true; ll m1 = 1; ll m2 = 1;
        for(int i=0; i<k; i++){
            if(b && (a[i] < 0)){frst = i; b = false;}
            if(a[i] < 0) lst = i;
        }
        for(int i=0; i<lst; i++) m1*=a[i];
        for(int i=frst+1; i<k; i++) m2*=a[i];
        if(lst == 0) m1 = 0;
        if(frst+1 >= k) m2 = 0;
        m = max(m1, m2);
    }
    else{
        m = 1; for(int i=0; i<k; i++) m*=a[i];
    }
    return m;
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>t;
	for(int _=0; _<t; _++){
        cin>>n; vi vec; int cnt = 0; vector<ll> mm; vi vec2;

        for(int k=0; k<n; k++){
            cin>>s; vec2.pb(s);
            if(s == 0){
                mm.pb(findmax(vec, cnt)); vec.clear(); cnt = 0;
            }
            else{vec.pb(s); if(s < 0) cnt++;}
        }

        mm.pb(findmax(vec, cnt)); ll mx = 0;
        for(int i=0; i<mm.size(); i++){
            if(mx < mm[i]) mx = mm[i];
        }
        if(n == 1) cout<<vec2[0];
        else cout<<(mx%998244353)<<nl;
	}
	return 0;
}
