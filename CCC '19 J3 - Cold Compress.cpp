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

int n, cnt; string s;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>s; cnt = 0;
        for(int j=0; j<s.size(); j++){
            cnt++;
            if((j < s.size()-1) && (s[j] != s[j+1])){cout<<cnt<<' '<<s[j]<<' '; cnt = 0;}
            else if(j == s.size()-1) cout<<cnt<<' '<<s[j]<<' ';
        }
        cout<<nl;
	}

	return 0;
}
