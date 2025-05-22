#include <bits/stdc++.h>
using namespace std;
//--------------------------
int c, d, e; string OR, AND, XOR; long long ans = 1;

signed main(){
    cin.tie(0); ios::sync_with_stdio(0);
    
    cin>>c>>d>>e; OR = bitset<30>(c).to_string(); AND = bitset<30>(d).to_string();
    XOR = bitset<30>(e).to_string();
    // cout<<OR<<' '<<AND<<' '<<XOR<<'\n';
    for(int i=0; i<30; i++){
        if(OR[i] == '1' && AND[i] == '0' && XOR[i] == '1') ans *= 2;
        else if(OR[i] == '1' && AND[i] == '1' && XOR[i] == '0') ;
        else if(OR[i] == '0' && AND[i] == '0' && XOR[i] == '0') ;
        else ans = 0;
        // cout<<ans<<'\n';
    }
    cout<<ans<<'\n';
}

/*

A & B = 1 --> A = 1, B = 1
A | B = 0 --> A = 0, B = 0
if OR has a digit of 0 and AND has a digit of 1, no sol
if AND is 1, there is only one possibility for that digit
    same if OR is 0
if AND is 0 and OR is 1, 2 possibilities for that digit

dig: 1 0
or = 1, and = 0, xor = 1
dig: 1 1
or = 1, and = 1, xor = 0
dig: 0 0
or = 0, and = 0, xor = 0
valid OR/AND/XOR: (1, 0, 1)*2, (1, 1, 0), (0, 0, 0)

1101110 or
0101100 and
1000010 xor
*/