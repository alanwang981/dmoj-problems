#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define sec second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

string s; int cnt = 0; bool b; int x = 0; int y = 0;
char arr[5][6] = {{'A', 'B', 'C', 'D', 'E', 'F'}, {'G', 'H', 'I', 'J', 'K', 'L'}, {'M', 'N', 'O', 'P', 'Q', 'R'}, {'S', 'T', 'U', 'V', 'W', 'X'}, {'Y', 'Z', ' ', '-', '.', '\n'}};

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	getline(cin, s);
	for(int h=0; h<s.size(); h++){
        b = false;
        for(int i=0; i<5; i++){
            for(int j=0; j<6; j++){
                if(arr[i][j] == s[h]){cnt += (abs(x-j)+abs(y-i)); x=j; y=i; b = true; break;}
            }
            if(b) break;
        }
	}

    cnt += (9-x-y); cout<<cnt;


	return 0;
}
