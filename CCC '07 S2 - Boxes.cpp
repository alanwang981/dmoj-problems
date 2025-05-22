#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, m; vector<vector<int>> vec; vector<int> t(3);

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        for(int j=0; j<3; j++) cin>>t[j];
        sort(t.begin(), t.end()); vec.push_back(t);
	}

    cin>>m;
	for(int i=0; i<m; i++){
        for(int j=0; j<3; j++) cin>>t[j];
        sort(t.begin(), t.end()); int ans = 1e9+7;
        for(int j=0; j<n; j++){
            if((t[0]<=vec[j][0]) && (t[1]<=vec[j][1]) && (t[2]<=vec[j][2])) if(ans > vec[j][0]*vec[j][1]*vec[j][2])ans = vec[j][0]*vec[j][1]*vec[j][2];
        }
        if(ans != 1e9+7) cout<<ans<<'\n';
        else cout<<"Item does not fit.\n";
	}

	return 0;
}
