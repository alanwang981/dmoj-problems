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

int n; int cnt = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
    for(int i=0; i<=floor(n/4); i++){
        if((n-4*i) % 5 == 0) cnt++;
    }
    cout<<cnt;

	return 0;
}
