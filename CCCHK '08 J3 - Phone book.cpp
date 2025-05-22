#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL; const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//-----------------------end----------------------------

int n, m, t; string st; vector<int> f; vector<pair<int, string>> vec; int mx = -1; string mxn;


int bs(vector<pair<int, string>> sorted_array,  int element){
    int left = 0; int right = vec.size();
    while (left <= right){
        int middle = (left + right) / 2;
        if (sorted_array[middle].first == element)
            return middle;
        if (sorted_array[middle].first < element)
            left = middle+1;
        else right = middle-1;
    }
}


int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>st>>t; vec.push_back({t, st}); f.push_back(0);
	}

	sort(vec.begin(), vec.end()); cin>>m;
	for(int i=0; i<m; i++){
        cin>>t; int idx = bs(vec, t); f[idx]++;
	}

	for(int i=0; i<n; i++){
        if(f[i] > mx){mx = f[i]; mxn = vec[i].second; break;}
	}

    cout<<mxn;

	return 0;
}
