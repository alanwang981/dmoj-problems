#include <bits/stdc++.h>
using namespace std;
#define int long long
//-----------------------

int n, cnt = 0;

signed main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // inputs
    cin>>n; vector<int> vec1(n); vector<int> vec2(n);
    for(int i=0; i<n; i++) cin>>vec1[i];
    for(int i=0; i<n; i++) cin>>vec2[i];

    for(int i=0; i<n; i++){
        if(vec1[i] == 1){
            cnt+=3;
            if((i%2 == 0) && (vec2[i] == 1)) cnt--;
            if(i > 0 && vec1[i-1] == 1) cnt--;
            if(i < n-1 && vec1[i+1] == 1) cnt--;
        }
        if(vec2[i] == 1){
            cnt+=3;
            if((i%2 == 0) && (vec1[i] == 1)) cnt--;
            if(i > 0 && vec2[i-1] == 1) cnt--;
            if(i < n-1 && vec2[i+1] == 1) cnt--;
        }
    }
    cout<<cnt<<endl;

}
