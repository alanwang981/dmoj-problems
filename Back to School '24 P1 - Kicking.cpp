#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------
int n, m, k, cnt; string s, ans; char cur;
// if B is within K units right of A, or if A is within K units left of B
// while A is k units left of B, all Bs will result in N

signed main() {

    std::cin.tie(0); std::ios::sync_with_stdio(0);

    cin>>n>>m>>k;
    while(n--){
        cin>>s; cnt = 0; ans = ""; for(int i=0; i<m; i++) ans += '.';
        for(int i=0; i<m; i++){
            if(s[i] == 'A'){
                cnt = k+1;
            }
            else if(s[i] == 'B'){
                if(cnt > 0) ans = ans.substr(0, i) + 'N' + ans.substr(i+1, m-i-1);
                else ans = ans.substr(0, i) + 'Y' + ans.substr(i+1, m-i-1);
            }
            if(cnt > 0) cnt--;
        } cnt = 0;
        for(int i=m-1; i>=0; i--){
            if(s[i] == 'B'){
                cnt = k+1;
            }
            else if(s[i] == 'A'){
                if(cnt > 0) ans = ans.substr(0, i) + 'N' + ans.substr(i+1, m-i-1);
                else ans = ans.substr(0, i) + 'Y' + ans.substr(i+1, m-i-1);
            }
            if(cnt > 0) cnt--;
        }
        cout<<ans<<endl;
    }

    return 0;
}
