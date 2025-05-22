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

int t; int n = 1;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	while(true){
        cin>>t; if(t == 0){cout<<"You Quit!"; break;}
        n += t;
        if(n > 100) n -= t;
        if(n == 9) n = 34;
        if(n == 40) n = 64;
        if(n == 54) n = 19;
        if(n == 67) n = 86;
        if(n == 90) n = 48;
        if(n == 99) n = 77;
        cout<<"You are now on square "<<n<<nl;
        if(n == 100){cout<<"You Win!"; break;}
	}

	return 0;
}
