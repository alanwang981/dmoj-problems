#include <bits/stdc++.h>
using namespace std;
#define int long long
//---------------------
int x, y, idx; string b; bool first = true; vector<string> ans;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>x>>y; if(x < y){
        swap(x, y); ans.push_back("B C A\n"); // put B in A's place 
    } b = bitset<31>(y).to_string(); 
    for(int i=0; i<31; i++) if(b[i] == '1'){
        idx = i; break;
    } b = b.substr(idx, 31-idx); reverse(b.begin(), b.end()); int n = b.size(); // shave b

    ans.push_back("A A B\n"); // 1 2 0 1
    if(b[0] == '1') ans.push_back("A C C\n"); // 1 2 1 1
    for(int i=1; i<n; i++){
        if(b[i] == '1'){
            ans.push_back("B C C\n"); 
        } ans.push_back("B B B\n"); 
    } 
    cout<<ans.size()<<'\n';
    for(string s : ans) cout<<s;
    cout<<"C\n";
}

/*
convert y to binary
10 15
15 = 1111
10 15 0 1
A A B -> 1 2 0 1 // store
A A D -> 1 2 0 2 // store


B B C -> 1 2 4 2 // store
C D D -> 1 2 4 6 // add
B B B -> 1 4 4 6 // x2
B B C -> 1 4 8 6 // store
C D D -> 1 4 8 14 // add
A D D -> 1 4 8 15 // final add
A: original
B: x2 slot
C: adding slot
D: placeholder
*/