#include <bits/stdc++.h>
using namespace std;

int r, c, ch, h, n, ch2; string w; bool foundt = true, found; char a[101][101];
// r, c, h, w from problem
// a is the grid, n is the length of the word
// ch tracks the index of the word
// found checks if the full word is found
// ch2 is a copy of ch for turning


// algorithm: locate the first letter, then expand on all directions until fail


// checks if the character t indexes away from <i, j> in a given direction matches the given character
// i, j are the starting/turning i, j indexes; t is the amt away from that point
bool checknext(int i, int j, int t, string dir, char chr){

	if(dir == "horf" && j+t<c && a[i][j+t] == chr){
		//cout<<"function: turning point = "<<a[i][j]<<", next = "<<a[i][j+t]<<", char = "<<chr<<' '<<ch<<' '<<ch2<<'\n';
		return true;
	}else if(dir == "horb" && j>=t && a[i][j-t] == chr){
		return true;
	}else if(dir == "verf" && i+t<r && a[i+t][j] == chr){
		//cout<<"function: turning point = "<<a[i][j]<<", next = "<<a[i+t][j]<<", char = "<<chr<<' '<<ch<<' '<<ch2<<'\n';
		return true;
	}else if(dir == "verb" && i>=t && a[i-t][j] == chr){
		//cout<<"function: turning point = "<<a[i][j]<<", next = "<<a[i-t][j]<<", char = "<<chr<<' '<<ch<<' '<<ch2<<'\n';
		return true;
	}else if(dir == "dsw" && i+t<r && j+t<c && a[i+t][j+t] == chr){
		return true;
	}else if(dir == "dne" && i>=t && j>=t && a[i-t][j-t] == chr){
		return true;
	}else if(dir == "dse" && i+t<r && j>=t && a[i+t][j-t] == chr){
		return true;
	}else if(dir == "dnw" && i>=t && j+t<c && a[i-t][j+t] == chr){
		return true;
	}
	return false;
}

// checks turn and uses mainly global variables
// i, j are the turning i, j indexes
void turn(int i, int j, string dir){
	if(checknext(i, j, 1, dir, w[ch+1])){
		ch2 = ch+1;
		while(ch2 < n){
			foundt = true;
			if(!checknext(i, j, ch2-ch, dir, w[ch2])){
				foundt = false; break;
			}ch2++;
		}if(foundt) h++;
		foundt = false;
	}
}


signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>w>>r>>c; n = w.size();
	for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin>>a[i][j];

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(a[i][j] == w[0]){
				ch = 1;
				// determine the direction that the word is heading
				while(ch < n){
					found = true;
					if(!checknext(i, j, ch, "horf", w[ch])){
						found = false; break;
					}
					// check turn
					turn(i, j+ch, "verf");
					turn(i, j+ch, "verb");
					ch++;
				}if(found) h++;
				found = false; ch = 1;

				while(ch < n){
					found = true;
					if(!checknext(i, j, ch, "horb", w[ch])){
						found = false; break;
					}
					turn(i, j-ch, "verf");
					turn(i, j-ch, "verb");
					ch++;
				}if(found) h++;
				found = false; ch = 1;

				while(ch < n){
					found = true;
					if(!checknext(i, j, ch, "verf", w[ch])){
						found = false; break;
					}
					turn(i+ch, j, "horf");
					turn(i+ch, j, "horb");
					ch++;
				}if(found) h++;
				found = false; ch = 1;

				while(ch < n){
					found = true;if(!checknext(i, j, ch, "verb", w[ch])){
						found = false; break;
					}
					turn(i-ch, j, "horf");
					turn(i-ch, j, "horb");
					ch++;
				}if(found) h++;
				found = false; ch = 1;

				while(ch < n){
					found = true;if(!checknext(i, j, ch, "dsw", w[ch])){
						found = false; break;
					}
					turn(i+ch, j+ch, "dse");
					turn(i+ch, j+ch, "dnw");
					ch++;
				}if(found) h++;
				found = false; ch = 1;

				while(ch < n){
					found = true;if(!checknext(i, j, ch, "dne", w[ch])){
						found = false; break;
					}
					turn(i-ch, j-ch, "dse");
					turn(i-ch, j-ch, "dnw");
					ch++;
				}if(found) h++;
				found = false; ch = 1;

				while(ch < n){
					found = true;if(!checknext(i, j, ch, "dse", w[ch])){
						found = false; break;
					}
					turn(i+ch, j-ch, "dsw");
					turn(i+ch, j-ch, "dne");
					ch++;
				}if(found) h++;
				found = false; ch = 1;

				while(ch < n){
					found = true;if(!checknext(i, j, ch, "dnw", w[ch])){
						found = false; break;
					}
					turn(i-ch, j+ch, "dsw");
					turn(i-ch, j+ch, "dne");
					ch++;
				}if(found) h++;
			}
		}
	}
	cout<<h<<'\n';

}
