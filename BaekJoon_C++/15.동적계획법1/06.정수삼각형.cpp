/*
	정수삼각형
*/
#include <iostream>

using namespace std;

int arr[500][500];
int Dp[500][500];
int minFinder(int n, int m);

int main(void){
	
	int N,max = 0;
	cin >> N;

	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++){
			cin >> arr[i][j];
			
			if(i == 0 && j == 0)
				Dp[i][j] = arr[i][j];

			else{
				if(j == 0)
					Dp[i][j] = Dp[i-1][j] + arr[i][j];
				else if(j == i)
					Dp[i][j] = Dp[i-1][j-1] + arr[i][j];
				else
					Dp[i][j] = minFinder(Dp[i-1][j-1], Dp[i-1][j]) + arr[i][j];
			}
		}
	}
	for(int i=0; i<N; i++)
		max = minFinder(max, Dp[N-1][i]);
	
	cout << max << "\n";
}

int minFinder(int n, int m){
	
	if(n > m)
		return n;

	else
		return m;
}
