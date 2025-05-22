//#pragma GCC optimize ("Ofast")
//#pragma GCC target ("avx2")
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define pf push_front
#define f first
#define s second
#define debug cout<<"HERE"<<endl;
#define ell "\n"
#define all(__x) __x.begin(),__x.end()

//#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef unsigned __int128 u128;
typedef __int128 int128;
constexpr int INF = 0x3f3f3f3f;
constexpr ll LLINF = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;

//void fileio(string name) {
//    freopen((name+".in").c_str(),"r",stdin);
//    freopen((name+".out").c_str(),"w",stdout);
//}
template <typename T>
inline constexpr const T &maxof(const T &t) {
    return t;
}

template <typename T, typename... Args>
inline constexpr const T &maxof(const T &t, const Args &...args) {
    return max(t, maxof(args...));
}
template <typename T>
inline constexpr const T &minof(const T &t) {
    return t;
}

template <typename T, typename... Args>
inline constexpr const T &minof(const T &t, const Args &...args) {
    return min(t, minof(args...));
}
#define scan(x); do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
//struct custom_hash {
//    static uint64_t splitmix64(uint64_t x) {
//        // http://xorshift.di.unimi.it/splitmix64.c
//        x += 0x9e3779b97f4a7c15;
//        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//        return x ^ (x >> 31);
//    }
//
//    size_t operator()(uint64_t x) const {
//        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//        return splitmix64(x + FIXED_RANDOM);
//    }
//};
//gp_hash_table<long long, int, custom_hash> mp;
//End of Template----------------------------------------------------------------------

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

    long double n; long double m; cin >> n >> m; long double l = ceil(log2(n)); int ans = ceil(l/m); cout << ans;

	return 0;
}
