/*
	이항계수2
	
	자연수 N과 정수 K가 주어졌을때 nCk를 10007로 나눈 나머지를 구하는 프로그램 작성
*/
#include <iostream>

using namespace std;

int main(void){
	
	int N, K, result;
	cin >> N >> K;
	
	int Dp[1001][1001] = { 0 };

	for(int i=1; i<=N; i++){
		for(int j=0; j<= N; j++){
			if(i == j || j == 0){
				Dp[i][j] = 1;
				continue;
			}
			Dp[i][j] = (Dp[i-1][j] + Dp[i-1][j-1]) % 10007;
		}
	}
	cout << Dp[N][K] << "\n";
}
