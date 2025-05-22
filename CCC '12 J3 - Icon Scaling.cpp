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

int n; string l1, l2, l3;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;	//l1 = n*'*'+n*'x'+n*'*'; l2 = n*' '+2*n*'x'; l3 = n*'*'+n*' '+n*'*';
	for(int i=0; i<n; i++){l1+='*'; l2+=' '; l3+='*';}
	for(int i=0; i<n; i++){l1+='x'; l2+='x'; l3+=' ';}
	for(int i=0; i<n; i++){l1+='*'; l2+='x'; l3+='*';}
	for(int i=0; i<n; i++) cout<<l1<<nl;
	for(int i=0; i<n; i++) cout<<l2<<nl;
	for(int i=0; i<n; i++) cout<<l3<<nl;

	return 0;
}
