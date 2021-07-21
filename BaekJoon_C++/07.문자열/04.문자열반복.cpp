/*
	문자열 반복
	문자열 S를 입력받은 후에 각 문자를 R번 반복해 새 문자열 P를 만든후 출력하는 프로그램 작성

*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
	
	int T,R,S_len;
	char S[20];

	cin >> T;

	for(int i=0; i<T; i++){
		cin >> R >> S;
		S_len = strlen(S);
		for(int j=0; j<S_len; j++){
			for(int k=0; k<R; k++){
				cout << S[j];
			}
		}
		cout << endl;
	}

}
