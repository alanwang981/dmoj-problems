#include <bits/stdc++.h>
using namespace std;
//-----------------------

string n; int cnt;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n; n = n + n[0];
	if(n[0] == n[1] && n[1] == n[2] && n[2] == n[3]){cout<<"weak"; return 0;}

	cnt = 0;
	for(int i=0; i<4; i++){
		if(n[i]-n[i+1] == 1) cnt++;
		if(n[i]-n[i+1] == -9) cnt++;
	}if(cnt == 3){cout<<"weak"; return 0;}

	cnt = 0;
	for(int i=0; i<4; i++){
		if(n[i]-n[i+1] == -1) cnt++;
		if(n[i]-n[i+1] == 9) cnt++;
	}if(cnt == 3){cout<<"weak"; return 0;}

	cout<<"strong";	return 0;
}
