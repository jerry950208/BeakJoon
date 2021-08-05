/*
	01타일

	크기가 N인 2진수열을 만들때 00이 항상 붙어 있다

	길이가 N인 모든 2진수열의 개수를 15746으로 나눈 나머지 출력
*/
#include <iostream>

using namespace std;

int Dp[1000000];

int main(void){
	
	int N;
	cin >> N;
	
	Dp[0] = 1;
	Dp[1] = 2;

	for(int i=2; i<N; i++){
		Dp[i] = (Dp[i-1] + Dp[i-2]) % 15746;
	}

	cout << Dp[N-1] << "\n";
}
