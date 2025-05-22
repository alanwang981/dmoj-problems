#include <bits/stdc++.h>

using namespace std;


string biggerInt(string n1, string n2) {
    bool eq = true;
    if(n1.size() > n2.size()) return n1;
    else if(n2.size() > n1.size()) return n2;
    else {
        int len = n1.size();
        for (int k = 0; k < len; k++) {
            if (n1[k] < n2[k]) {
                return n2;
                eq = false;
            }
            else if (n1[k] > n2[k]) {
                return n1;
                eq = false;
            }
        }
        if(eq) return n1;
    }
}


int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        string ans;
        int r = 0;
        int j;
        int s = 0;

        if((a[0] == '-' && b[0] == '-') || (isdigit(a[0]) && isdigit(b[0]))) {
            if(a[0] == '-' && b[0] == '-') s = 1;
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            for (j = 0; j < min(a.size()-s, b.size()-s); j++) {
                int c = (a[j] - '0') + (b[j] - '0') + r;

                if(c > 9){
                    r = 1;
                    string t = to_string(c);
                    ans += t[1];
                }
                else{
                    r = 0;
                    ans += to_string(c);
                }
            }
            if(r == 1 && (a.size() == b.size())) ans += '1';

            if(a.size() > b.size()){
                for (; j < a.size()-s; j++){
                    string temp = to_string(a[j]-'0'+r);
                        if(temp.size() > 1){
                            r = 1;
                            ans += temp[1];
                        }
                        else{
                            r = 0;
                            ans += temp;
                        }
                }
            }
            if(a.size() < b.size()){
                for (; j < b.size()-s; j++) {
                    string temp = to_string((b[j])-'0'+r);
                    if(temp.size() > 1){
                        r = 1;
                        ans += temp[1];
                       }
                    else {
                        r = 0;
                        ans += temp;
                        }
                }
            }
            if(r == 1 && (a.size() != b.size())) ans += '1';
        }



        else {
            if (a[0] == '-') {
                a = a.substr(1, a.size()-1);
                if (biggerInt(a, b) == a) { // - (a - b)
                    reverse(a.begin(), a.end());
                    reverse(b.begin(), b.end());
                    for (j = 0; j < b.size(); j++) {
                        int c = (a[j] - '0') - (b[j] - '0') - r;

                        if(c < 0){
                            c = (a[j] - '0') + 10 - (b[j] - '0') - r;
                            r = 1;
                            ans += to_string(c);
                        }
                        else {
                            r = 0;
                            ans += to_string(c);
                        }
                    }

                    for (; j < a.size(); j++) {
                        string temp = to_string((a[j])-'0'-r);
                        if(temp.size() > 1) {
                            ans += '9';
                        }
                        else {
                            r = 0;
                            ans += temp;
                        }
                    }
                    ans += '-';

                }
                else { // b - a
                    reverse(a.begin(), a.end());
                    reverse(b.begin(), b.end());
                    for (j = 0; j < a.size(); j++) {
                        int c = (b[j] - '0') - (a[j] - '0') - r;

                        if(c < 0){
                            c = (b[j] - '0') + 10 - (a[j] - '0') - r;
                            r = 1;
                            ans += to_string(c);
                        }
                        else {
                            r = 0;
                            ans += to_string(c);
                        }
                    }

                    for (; j < b.size(); j++) {
                        string temp = to_string((b[j])-'0'-r);
                        if(temp.size() > 1) {
                            ans += '9';
                        }
                        else {
                            r = 0;
                            ans += temp;
                        }
                    }
                }
            }
            else {
                b = b.substr(1, b.size()-1);
                if (biggerInt(a, b) == a) { // a - b
                    reverse(a.begin(), a.end());
                    reverse(b.begin(), b.end());
                    for (j = 0; j < b.size(); j++) {
                        int c = (a[j] - '0') - (b[j] - '0') - r;

                        if(c < 0){
                            c = (a[j] - '0') + 10 - (b[j] - '0') - r;
                            r = 1;
                            ans += to_string(c);
                        }
                        else{
                            r = 0;
                            ans += to_string(c);
                        }
                    }

                    for (; j < a.size(); j++) {
                        string temp = to_string((a[j])-'0'-r);
                        if(temp.size() > 1){ // if negative
                            ans += '9';
                        }
                        else {
                            r = 0;
                            ans += temp;
                        }
                    }
                }
                else { // -(b - a)
                    reverse(a.begin(), a.end());
                    reverse(b.begin(), b.end());
                    for (j = 0; j < a.size(); j++) {
                        int c = (b[j] - '0') - (a[j] - '0') - r;

                        if(c < 0){
                            c = (b[j] - '0') + 10 - (a[j] - '0') - r;
                            r = 1;
                            ans += to_string(c);
                        }
                        else {
                            r = 0;
                            ans += to_string(c);
                        }
                    }

                    for (; j < b.size(); j++) {
                        string temp = to_string((b[j])-'0'-r);
                        if(temp.size() > 1) {
                            ans += '9';
                        }
                        else {
                            r = 0;
                            ans += temp;
                        }
                    }
                    ans += '-';
                }
            }
        }

        reverse(ans.begin(), ans.end());
        if(ans[0] == '0'){
            while (ans[0] == '0') ans = ans.substr(1, ans.size()-1);
        }
        if(ans[0] == '-'){
            while (ans[1] == '0') ans = '-' + ans.substr(2, ans.size()-1);
        }
        if(ans == "") ans = "0";
        if(ans == "-") ans = "0";
        if(s == 1) ans = '-' + ans;
        cout << ans << "\n";
    }
    return 0;
}
