#include <bits/stdc++.h>
using namespace std;
//-----------------------

string s;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	while(true){
        getline(cin, s); if(s == "0") break;
        stack<string> stk; string s1, s2;

        for(int i=s.length()-1; i>=0; i--){
            if(s[i] >= '0' && s[i]<= '9' ) stk.push(s.substr(i,1));
            else if(s[i] != ' '){s1 = stk.top(); stk.pop(); s2 = stk.top(); stk.pop(); stk.push(s1+' '+s2+' '+s[i]);}
        }
        cout<<stk.top()<<'\n';
    }

	return 0;
}
