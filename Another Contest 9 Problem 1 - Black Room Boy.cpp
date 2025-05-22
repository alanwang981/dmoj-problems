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

int t;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>t;
	for(int _=0; _<t; _++){
        int k; int p = 0; set<pair<int, int>> st; vector<int> dis;

        for(int i=0; i<4; i++){
            cin>>k; dis.pb(k); p+=k;
        }

        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(i != j) st.insert({(dis[i]+dis[j]), (p-dis[i]-dis[j])});
            }
        }
        pi vec(st.begin(), st.end()); sort(vec.begin(), vec.end()); k = vec.size(); cout<<k<<nl;
        for(int i=0; i<k; i++) cout<<vec[i].f<<' '<<vec[i].sec<<nl;

	}

	return 0;
}
