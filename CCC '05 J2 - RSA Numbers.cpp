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

int a, b, cntt; int cnt = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>a>>b;
	for(int i=a; i<=b; i++){
        cntt = 0;
        for(int j=1; j<=i; j++){
            if(!(i%j)) cntt++;
        }
        if(cntt == 4) cnt++;
	}

    cout<<"The number of RSA numbers between "<<a<<" and "<<b<<" is "<<cnt;

	return 0;
}
