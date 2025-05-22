#include <bits/stdc++.h>
using namespace std;
//-----------------------

int t, n;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>t;
	for(int _=0; _<t; _++){

        cin>>n;

        for(int a=2; a<=2*n; a++){

            int b = 2*n-a; bool f = true;

            for(int i=2; i<=sqrt(2*n); i++){
                if((b%i==0) || (a%i==0)){f = false; break;}
            }

            if(f){cout<<a<<' '<<b<<'\n'; break;}

        }
	}

	return 0;
}

//1 15
