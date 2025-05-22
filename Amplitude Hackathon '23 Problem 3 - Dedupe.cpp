#include <bits/stdc++.h>
using namespace std;
#define int long long
//------------------------------------------
int n, t1, t2; map<string, int> m; string id;

signed main() {

    cin>>n;
    while(n--){
        cin>>id>>t1>>t2;
        if(!m.count(id)){
            m[id] = t2;
            cout<<"ACCEPTED"<<endl;
        } 
        else{
            if(m[id] < t1){
                m[id] = t2;
                cout<<"ACCEPTED"<<endl;
            }else cout<<"REJECTED"<<endl;
        }
    }

    return 0;
}