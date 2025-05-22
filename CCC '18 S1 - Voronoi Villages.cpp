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

int n; double t; vector<double> vec; double mn = mod;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>t; vec.pb(t);
	}
	sort(vec.begin(), vec.end());

	for(int i=1; i<n-1; i++){
        t = ((vec[i]-vec[i-1])/2 + (vec[i+1]-vec[i])/2);
        if(t < mn) mn = t;
	}
    cout<<fixed<<setprecision(1);
    cout<<mn;

	return 0;
}
