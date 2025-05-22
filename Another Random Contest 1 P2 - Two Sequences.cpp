#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define sec second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int n, q, l, r, t; vi a, b; ll mn, s1, s2;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>q;
	for(int i=0; i<n; i++){cin>>t; a.pb(t);}
    for(int i=0; i<n; i++){cin>>t; b.pb(t);}

    for(int _=0; _<q; _++){
        cin>>l>>r; mn = mod;
        for(int k=l-1; k<r-1; k++){
            s1 = 0; s2 = 0;
            for(int i=l-1; i<=k; i++) s1+=a[i];
            for(int i=k+1; k<r-1; k++) s2+=b[i];
            if(max(s1, s2) < mn) mn = max(s1, s2);
        }
        cout<<mn<<nl;
    }

	return 0;
}
