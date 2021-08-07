/*
	계단오르기
*/

#include <iostream>
#define bigFinder(a,b) a > b ? a : b

using namespace std;

int Stair[301], Dp[301];

int main(void){

	int N, result;
	cin >> N;
	
	for(int i=0; i<N; i++)
		cin >> Stair[i];

	Dp[0] = Stair[0];
	Dp[1] = bigFinder(Stair[0], Stair[0] + Stair[1]);
	Dp[2] = bigFinder(Stair[0] + Stair[2], Stair[1] + Stair[2]);

	for(int i=3; i<N; i++)
		Dp[i] = bigFinder(Stair[i] + Dp[i-2], Stair[i] + Stair[i-1] + Dp[i-3]);

	cout << Dp[N-1] << "\n";
}
