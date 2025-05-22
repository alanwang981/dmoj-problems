#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define f first
#define s second
#define debug cout<<"HERE"<<endl;
#define ell "\n"
#define all(__x) __x.begin(),__x.end()

//#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef unsigned __int128 u128;
typedef __int128 int128;
constexpr int INF = 0x3f3f3f3f;
constexpr ll LLINF = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------



int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int a, b, c, t, i, j, k; cin>>a>>b>>c>>t; int cnt = 0;

    for(i=0; i<t+1; i++){
        for(j=0; j<t+1; j++){
            for(k=0; k<t+1; k++){
                if(!(i == 0 && j == 0 && k == 0) && (a*i+b*j+c*k <= t)){cnt++; cout<<i<<" Brown Trout, "<<j<<" Northern Pike, "<<k<<" Yellow Pickerel\n";}
            }
        }
    }

	cout<<"Number of ways to catch fish: "<<cnt;

	return 0;
}
