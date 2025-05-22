#include <bits/stdc++.h>
using namespace std;
//-----------------------
// 1-indexed

int x, y, dis[50], cur; queue<int> q; char c;
vector<vector<int>> adj = {{}, {6}, {6}, {4,5,6,15}, {3,5,6}, {3,4,6}, {1,2,3,4,5,7}, {6,8}, {7,9}, {8,10,12}, 
{9,11}, {10,12}, {9,11,13}, {12,14,15}, {13}, {3,13}, {17,18}, {16,18}, {16,17},
{}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}}; 

signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	

    while(cin>>c && c != 'q'){

        if(c == 'i'){
            cin>>x>>y; adj[x].push_back(y); adj[y].push_back(x); 
        }

        else if(c == 'd'){
            cin>>x>>y;
            // check this for debugging 
            adj[x].erase(find(adj[x].begin(), adj[x].end(), y)); adj[y].erase(find(adj[y].begin(), adj[y].end(), x)); 
        }

        else if(c == 'n'){
            cin>>x; cout<<adj[x].size()<<'\n';
        }
        else if(c == 'f'){
            cin>>x; set<int> st;
            for(auto a: adj[x]){
                for(auto b: adj[a]) st.insert(b);
            }
            for(auto a: adj[x]) st.erase(a);
            st.erase(x);
            cout<<st.size()<<'\n';
        }
        else if(c == 's'){
            cin>>x>>y; for(int i=1; i<50; i++) dis[i] = -1; 
            q.push(x); dis[x] = 0; 
            while(!q.empty()){
		        cur = q.front(); q.pop();
		        for(int neighbor : adj[cur]){
			        if(dis[neighbor] == -1){
				        dis[neighbor] = dis[cur]+1;
				        q.push(neighbor);
			        }
		        } 
	        }
            if(dis[y] == -1) cout<<"Not connected\n";
            else cout<<dis[y]<<'\n';
        }
    }
    

} 
