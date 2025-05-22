#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define loop for(int i=0; i<n; i++)
//-----------------------

int n, t, cnt; string s = "", st, ans;

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>t; getline(cin, st); map<string, int> mp;
	while(t--){
		s = "";
		while(true){
			getline(cin, st);
			if(st == "\n" || st == "") break;
			else s += st+'\n';
		}
		n = s.size(); st = ""; ans = ""; mp.clear(); cnt = 1;
		loop{
			if(s[i] == ' ' || s[i] == '\n'){
				if(mp.count(st)){
					ans += to_string(mp[st])+s[i];
				}
				else{
					mp.insert({st, cnt}); cnt++;
					ans += st+s[i];
				}
				st = "";
			}else st += s[i];
		}
		cout<<ans<<endl;
	}
	//getline(cin, st); cout<<st;

}
