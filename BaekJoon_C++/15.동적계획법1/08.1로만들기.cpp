/*
	1로 만들기
	정수 X에 사용할 수 있는 연산을 다음과 같이 세 가지이다

	1. X가 3으로 나누어 떨어지면 3으로 나눈다
	2. X가 2로 나누어 떨어지면,  2로 나눈다
	3. 1을 뺀다
*/
#include <iostream>

using namespace std;

int minFinder(int a, int b);

int main(void){
	
	int N,Dp[1000001];
	cin >> N;
	
	Dp[1] = 0;

	for(int i=2; i<=N; i++){
		Dp[i] = Dp[i-1] + 1;
		if(i % 2 == 0)
			Dp[i] = minFinder(Dp[i], Dp[i/2]+1);
		if(i % 3 == 0)
			Dp[i] = minFinder(Dp[i], Dp[i/3]+1);
	}
	
	cout << Dp[N] << "\n";
}

int minFinder(int a, int b){
	return a < b ? a : b;
}
