#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define s second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int n, s, t; int cnt = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>s>>t; if(5*s-3*t > 40) cnt++;
	}
    cout<<cnt;
    if(cnt == n) cout<<'+';
	return 0;
}
