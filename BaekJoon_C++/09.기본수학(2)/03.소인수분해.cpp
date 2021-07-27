/*
	소인수분해
	정수 N이 주어졌을때, 소인수분해하는 프로그램 작성
*/
#include <iostream>

using namespace std;

int main(){
	
	int N, cnt = 2;
	cin >> N;

	while(N > 1){
		if(N % cnt == 0){
			N /= cnt;
			cout << cnt << endl;
		}
		else
			cnt++;
	}
}
