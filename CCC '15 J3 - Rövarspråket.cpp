#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------

string s, t = "";

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>s;
	for(char x: s){
		t += x;
		int ord = (int)x;
		vector<int> vec = {97, 101, 105, 111, 117};
		int mn = 100, id;
		for(int i=0; i<5; i++){
			if(mn > abs(vec[i]-ord)){mn = abs(vec[i]-ord); id = i;}
		}
		if(mn != 0){
			t += (char)vec[id];
			if(ord == 122) t += 'z';
			else if(vec[id] == ord+1) t += (char)(ord+2);
			else t += (char)(ord+1);
		}
	}

	cout<<t<<endl;

}
