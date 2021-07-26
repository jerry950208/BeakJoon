/*
	부녀회장이 될테야

*/
#include <iostream>

using namespace std;

int apt[15][16];

void func_apt(){
	
	for(int i=0; i<15; i++){
		apt[i][1] = 1;
		apt[0][i] = i;
	}

	for(int i=0; i<15; i++){
		for(int j=1; j<16; j++){
			if(apt[i][j] == 0){
				apt[i][j] = apt[i-1][j] + apt[i][j-1];
			}
		}
	}
}

int main(){
	
	int T,k,n;
	
	func_apt();
	
	cin >> T;

	for(int i=0; i<T; i++){
		cin >> k >> n;
		cout << apt[k][n] << endl;
	}
}
