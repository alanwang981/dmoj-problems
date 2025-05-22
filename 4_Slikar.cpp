#include <bits/stdc++.h>
using namespace std;
//------------------------------------------
int flooddis[50][50], pdis[50][50]; int r, c, startx, starty, endx, endy, x, y; string s; char grid[50][50]; 
vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}}; queue<pair<int, int>> q;
// 0-indexed

signed main() {

    cin.tie(0); ios::sync_with_stdio(0);

    // input, setup for flood floodfill
    cin>>r>>c; 
    for(int i=0; i<r; i++){
        cin>>s; for(int j=0; j<c; j++){
            grid[i][j] = s[j]; pdis[i][j] = -1;
            if(s[j] == 'D'){
                endx = i, endy = j;
            }else if(s[j] == 'S'){
                startx = i; starty = j;
            }if(s[j] == '*'){
                flooddis[i][j] = 0; q.push({i, j});
            }else flooddis[i][j] = -1;
        }
    } // bfs flood floodfill
    while(!q.empty()){
        pair<int, int> cur = q.front(); q.pop();
        for(pair<int, int> dir : dirs){
            x = dir.first+cur.first; y = dir.second+cur.second;
            if(x>=0 && x<r && y>=0 && y<c && flooddis[x][y] == -1 && grid[x][y] == '.'){
                flooddis[x][y] = flooddis[cur.first][cur.second]+1; q.push({x, y});
            }
        }
    } // bfs painter floodfill
    pdis[startx][starty] = 0; q.push({startx, starty});
    while(!q.empty()){
        pair<int, int> cur = q.front(); q.pop();
        for(pair<int, int> dir : dirs){
            x = dir.first+cur.first; y = dir.second+cur.second;
            if(x>=0 && x<r && y>=0 && y<c && pdis[x][y] == -1 && grid[x][y] != 'X'){ // visit condition
                if(pdis[cur.first][cur.second]+1 < flooddis[x][y] || flooddis[x][y] == -1){ // check if flooded
                    pdis[x][y] = pdis[cur.first][cur.second]+1; q.push({x, y});
                }
            }
        }
    }if(pdis[endx][endy] == -1) cout<<"KAKTUS\n";
    else cout<<pdis[endx][endy]<<'\n';

}