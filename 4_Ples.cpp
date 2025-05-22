#include<bits/stdc++.h>
using namespace std;
const int sz = (int)1e5+1;
//--------------------
int n, cnt, t; priority_queue<int> wanttallguy, wantshortguy; vector<int> wantshortgirl, wanttallgirl;

signed main(){

    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n; for(int i=0; i<n; i++){
        cin>>t; if(t < 0) wantshortgirl.push_back(-1*t); else wanttallgirl.push_back(t);
    } for(int i=0; i<n; i++){
        cin>>t; if(t < 0) wantshortguy.push(-1*t); else wanttallguy.push(-1*t);
    } sort(wantshortgirl.begin(), wantshortgirl.end()); sort(wanttallgirl.rbegin(), wanttallgirl.rend());
    for(int guy : wantshortgirl){
        if(wanttallguy.empty()) break;
        if(abs(wanttallguy.top()) < guy){
            cnt++; wanttallguy.pop();
        }
    } for(int guy : wanttallgirl){
        if(wantshortguy.empty()) break;
        if(abs(wantshortguy.top()) > guy){
            cnt++; wantshortguy.pop();
        }
    }
    cout<<cnt<<'\n';
}

/*
4 arrays: want tall girl, want short girl, want tall guy, want short guy
want tall girl <--> want short guy
loop through shortest guys, give them the shortest girls if girl shorter, then remove that girl from the list
1 2 3 4
2 3 4 5
want short girl <--> want tall guy
*/