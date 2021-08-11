/*
	쉬운 계단 수
	인접한 모든 자리 수의 차이가 1이 난다, 이런 수를 계단 수라고 한다
	N이 주어질 때, 길이가 N인 계단 수가 총 몇 개 있는지 구하는 프로그램을 작성하시오
*/
#include <iostream>
#define MAX 1000000000
using namespace std;

int Dp[101][10];

int main(void){
	
	int N, result = 0;
	cin >> N;
	
	for(int i=0; i<10; i++)
		Dp[1][i] = 1;

	for(int i=2; i<=N; i++){
		for(int j=0; j<10; j++){
			
			if(j == 0)
				Dp[i][0] = Dp[i-1][1];

			else if(j == 9)
				Dp[i][9] = Dp[i-1][8];

			else
				Dp[i][j] = (Dp[i-1][j-1] + Dp[i-1][j+1]) % MAX;
		}
	}

	for(int i=1; i<10; i++)
		result = (result + Dp[N][i]) % MAX;

	cout << result % MAX<< "\n";
}
