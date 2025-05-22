#include <bits/stdc++.h>
using namespace std;
//-----------------------
int n, k;

signed main(){
    for(int _=0; _<5; _++){
        cin>>n>>k; if(k%(int)pow(2, n) == (int)pow(2, n)-1) cout<<"ON\n";
        else cout<<"OFF\n";
    }
}

/*
the first light is on every other turn
the second light has 0011
third light 00001111
...
the nth light is off for 2^n-1
light goes to N if all N lights are on
it's on for the first time at 2^n-1
it's on for every k*2^n-1

0 0|0 0 0 00 1
1 1 0|0 0 00 2
2 0|1 0 0 00 1
3 1 1 0|0 00 3
4 0|0 1 0 00 1
5 1 0|1 0 00 2
6 0|1 1 0 00 1
7 1 1 1 0|00 4
8 0|0 0 1 00 1
*/