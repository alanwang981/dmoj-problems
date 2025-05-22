#include <bits/stdc++.h>
using namespace std;
//#define int long long
//-----------------------

string s = "WELCOME"; int w, n, b, r;

signed main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>w;
    if(w >= 30){
        n = w-25; b = n/5; r = n%5;
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="TO";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="CCC";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="GOOD";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="LUCK";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="TODAY";
    }
    else if(w >= 24){
        n = w-20; b = n/4; r = n%4;
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="TO";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="CCC";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="GOOD";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="LUCK\nTODAY";
        for(int i=0; i<w-5; i++) s+='.';
    }
    else if(w >= 19){
        n = w-16; b = n/3; r = n%3;
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="TO";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="CCC";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="GOOD\nLUCK";
        for(int i=0; i<w-9; i++) s+='.';
        s+="TODAY";
    }
    else if(w >= 15){
        n = w-12; b = n/2; r = n%2;
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="TO";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="CCC\nGOOD";
        n = w-13; b = n/2; r = n%2;
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="LUCK";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="TODAY";
    }
    else if(w >= 14){
        n = w-12; b = n/2; r = n%2;
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="TO";
        for(int i=0; i<b; i++) s+='.';
        if(r > 0){s+='.'; r--;}
        s+="CCC\nGOOD";
        for(int i=0; i<w-8; i++) s+='.';
        s+="LUCK\nTODAY";
        for(int i=0; i<w-5; i++) s+='.';
    }
    else if(w >= 13){
        for(int i=0; i<w-9; i++) s+='.';
        s+="TO\nCCC.GOOD.LUCK\nTODAY";
        for(int i=0; i<w-5; i++) s+='.';
    }
    else if(w >= 9){
        for(int i=0; i<w-9; i++) s+='.';
        s+="TO\nCCC";
        for(int i=0; i<w-7; i++) s+='.';
        s+="GOOD\nLUCK";
        for(int i=0; i<w-9; i++) s+='.';
        s+="TODAY";
    }
    else{
        for(int i=0; i<w-7; i++) s+='.';
        s+="\nTO";
        for(int i=0; i<w-5; i++) s+='.';
        s+="CCC\nGOOD";
        for(int i=0; i<w-4; i++) s+='.';
        s+="\nLUCK";
        for(int i=0; i<w-4; i++) s+='.';
        s+="\nTODAY";
        for(int i=0; i<w-5; i++) s+='.';
    }

    cout<<s<<endl;

    return 0;
}
