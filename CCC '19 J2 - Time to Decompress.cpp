#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define sec second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int l, n; string s;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>l;
	for(int i=0; i<l; i++){
        cin>>n>>s; string ans = "";
        for(int j=0; j<n; j++) ans+=s;
        cout<<ans<<nl;
	}


	return 0;
}
