#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, f, ans;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	while(true){
		if(n <= 1) break;
		for(int i=2; i<=n; i++){
            if(!(n%i)){f = n/i; n -= f; ans += n/f; break;}
		}
	}
	cout<<ans;

	return 0;
}
