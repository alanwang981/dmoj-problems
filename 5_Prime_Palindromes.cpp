#include <bits/stdc++.h>
using namespace std;
//-----------------------
int l, u, _=5; vector<int> pp = {2, 3, 5, 7, 11};

// no need for sieve
bool isprime(int p){
    bool ans = true;
    for(int d=2; d<=(int)sqrt(p); d++) if(p%d == 0){
        ans = false; break;
    }
    return ans;
}

signed main(){
    
    cin.tie(0); ios::sync_with_stdio(0);

    for(int a=1; a<=9; a++) for(int b=0; b<=9; b++){
        if(isprime(a*101+b*10)) pp.push_back(a*101+b*10);
    } // ABA
    for(int a=1; a<=9; a++) for(int b=0; b<=9; b++){
        if(isprime(a*1001+b*110)) pp.push_back(a*1001+b*110);
    } // ABCBA
    for(int a=1; a<=9; a++) for(int b=0; b<=9; b++) for(int c=0; c<=9; c++){
        if(isprime(a*10001+b*1010+c*100)) pp.push_back(a*10001+b*1010+c*100);
    } // ABCCBA
    for(int a=1; a<=9; a++) for(int b=0; b<=9; b++) for(int c=0; c<=9; c++){
        if(isprime(a*100001+b*10010+c*1100)) pp.push_back(a*100001+b*10010+c*1100);
    }

    while(_--){
        cin>>l>>u; int cnt = 0;
        for(int x : pp){
            if(x > u) break;
            if(x >= l) cnt++;
        }
        cout<<cnt<<'\n';
    }
}

/*
2, 3, 5, 7, 11, ABA, ABBA, ABCBA, ABCCBA -> O(N^2) passes!
no need for sieve :D

*/