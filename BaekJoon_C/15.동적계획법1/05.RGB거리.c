#include <stdio.h>

int dp[1000][3];

int main(){
	int N;
	int min=1000;
	scanf("%d",&N);

	int rgb[N][3];
	for(int i=0; i<N; i++){
		scanf("%d %d %d",&rgb[i][0], &rgb[i][1], &rgb[i][2]);
		if(i==0){
			for(int j=0; j<3; j++){
				dp[0][j]=rgb[0][j];
			}
		}
		else if(i>0){
				dp[i][0] = rgb[i][0] + (dp[i-1][1] < dp[i-1][2] ? dp[i-1][1] : dp[i-1][2]);
				dp[i][1] = rgb[i][1] + (dp[i-1][0] < dp[i-1][2] ? dp[i-1][0] : dp[i-1][2]);
				dp[i][2] = rgb[i][2] + (dp[i-1][0] < dp[i-1][1] ? dp[i-1][0] : dp[i-1][1]);
		}
	}
	N-=1;
	if(dp[N][0]<dp[N][1])
		printf("%d\n", dp[N][0] < dp[N][2] ? dp[N][0] : dp[N][2]);	
	else
		printf("%d\n", dp[N][1] < dp[N][2] ? dp[N][1] : dp[N][2]);	
	return 0;
}
