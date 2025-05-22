#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n; string s, t; vector<pair<int, int>> vec; vector<int> ans;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>s; t = (s.substr(0, s.size()-1)); if(s.size() == 1) t = "0";
        vec.push_back({s[s.size()-1]-'0', stoi(t)});
	}

	sort(vec.begin(), vec.end());

	for(int i=0, j=0; i<10; i++){
        for(; j<n; j++){
            if(vec[j].first == i) ans.push_back(vec[j].first+10*vec[j].second);
            else break;
        }
        reverse(ans.begin(), ans.end()); for(int x : ans) cout<<x<<' ';
        ans.clear();
	}

	return 0;
}
