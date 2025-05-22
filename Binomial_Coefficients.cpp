#include <bits/stdc++.h>
using namespace std; 
#define int long long
//---------------------
int t, m, n, cur; vector<vector<int>> pascal;
map<int, vector<pair<int, int>>> idx; 

signed main(){
    cin.tie(0); ios::sync_with_stdio(0);

    /* here's a weird pascal's triangle
    6
    10
    15 20
    21 35 */
    for(int i=0; i<5; i++) pascal.push_back({6});
    idx[6].push_back({4, 2});
    for(int i=5; i<(int)2e5; i++){
        cur = i-1+pascal[i-1][0]; if(cur > (int)1e15) break;
        pascal.push_back({cur}); idx[cur].push_back({i, 2}); idx[cur].push_back({i, i-2});
        int j=1; for(; j<(i-3)/2; j++){
            cur = pascal[i-1][j-1]+pascal[i-1][j];
            if(cur > (int)1e15){
                pascal[i].push_back((int)1e15+1); break;
            } pascal[i].push_back(cur); idx[cur].push_back({i, j+2}); idx[cur].push_back({i, i-j-2});
        } // if we iterated to the last element in an even row
        if(i%2 == 0 && j == (i-2)/2-1){
            cur = pascal[i-1][j-1]+pascal[i-1][j-1];
            if(cur <= (int)1e15){
                pascal[i].push_back(cur); idx[cur].push_back({i, j+2});
            } else pascal[i].push_back((int)1e15+1);
        }
    }
    
    cin>>t; while(t--){
        cin>>m; idx[m].push_back({m, 1}); idx[m].push_back({m, m-1}); // k = 1
        // k = 2
        n = (1+round(sqrt(1.0+8.0*m)))/2; if(2*m == n*(n-1)){
            idx[m].push_back({n, 2}); idx[m].push_back({n, n-2});
        } // k = 3, bsearch
        int lo = 10, hi = 182000, mid = 91005;
        while(lo < hi){
            cur = mid*(mid-1)*(mid-2)/6;
            if(cur < m) lo = mid+1;
            else if(cur > m) hi = mid-1;
            else break;
            mid = (lo+hi)/2;
        } cur = mid*(mid-1)*(mid-2)/6;
        if(cur == m){
            idx[m].push_back({mid, 3}); idx[m].push_back({mid, mid-3});
        }
        // output
        set<pair<int, int>> ans; for(auto x : idx[m]) ans.insert(x);
        cout<<ans.size()<<'\n'; for(auto x : ans) cout<<"("<<x.first<<","<<x.second<<") ";
        cout<<'\n';
    }
}


/*
need ~O(log(m)) solution

idea: precompute pascal's triangle into idx array (have fun with MLE)
    don't store if too big
2
3
4 6
5 10
6 15 20
7 21 35
8 28 56 70
9 36 84 126
hypothesis: m can appear at most 4 times? prob false

n(n-1)...(n-k+1)/(k!)
m*k!(n-k)! = n!
*/