/*
	RGB거리
	집이 N개인 RGB거리가 있다
	집은 빨강 초록 파랑 중 하나의 색으로 칠해야 한다 각각의 집을 칠하는 비용이 주어졌을때
	아래 조건규칙을 만족하면서 모든집을 칠하는 비용의 최솟값을 구해보자

	1. 1번 집의 색은 2번집의 색과 같지 않아야 한다
	2. N번 집의 색은 N-1번 집의 색과 같지 않아야 한다
	3. i번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다(2 <= i <= N-1)
*/
#include <iostream>

using namespace std;

int RGB_arr[1001][3];
int Dp[1001][3];
int minFinder(int n, int m);

int main(void){
	
	int N,result;
	cin >> N;

	for(int i=0; i<N; i++){

		cin >> RGB_arr[i][0] >> RGB_arr[i][1] >> RGB_arr[i][2];
		
		if(i == 0){
			Dp[i][0] = RGB_arr[i][0];
			Dp[i][1] = RGB_arr[i][1];
			Dp[i][2] = RGB_arr[i][2];
		}
		
		else{
			Dp[i][0] = minFinder(Dp[i-1][1], Dp[i-1][2]);
			Dp[i][0] += RGB_arr[i][0];
			
			Dp[i][1] = minFinder(Dp[i-1][0], Dp[i-1][2]);
			Dp[i][1] += RGB_arr[i][1];
			
			Dp[i][2] = minFinder(Dp[i-1][0], Dp[i-1][1]);
			Dp[i][2] += RGB_arr[i][2];
		}

	}
	
	result = minFinder(Dp[N-1][0], minFinder(Dp[N-1][1], Dp[N-1][2]));

	cout << result << "\n";
	
}

int minFinder(int n, int m){
	
	if(n < m)
		return n;
	
	else
		return m;
}
