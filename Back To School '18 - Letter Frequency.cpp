#include <bits/stdc++.h>
using namespace std;
//-----------------------

string s; int q, n, l, r; char c;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	getline(cin, s); cin>>q; n = s.size(); int psa[n+1][26];

	for(int i=0; i<n; i++){
		for(int j=0; j<26; j++)	psa[i+1][j] = psa[i][j];
		if(s[i] != ' ') psa[i+1][s[i]-'a']++;
	}

	while(q>0){
		cin>>l>>r>>c; c -= 'a'; cout<<(psa[r][c]-psa[l-1][c])<<endl; q--;
	}

	return 0;
}
