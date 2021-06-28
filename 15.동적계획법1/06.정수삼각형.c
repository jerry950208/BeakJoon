#include <stdio.h>
int main(){
	int T, max=0;
	scanf("%d",&T);
	int dp[T][T];
	
	for(int i=0; i<T; i++){
		for(int j=0; j<=i; j++){
			scanf("%d",&dp[i][j]);
		}
	}	
	
	for(int i=1; i<T; i++){
		for(int j=0; j<=i; j++){
			if(j==0)
				dp[i][j] += dp[i-1][j]; // 피라미드 기준 가장 왼쪽
			else if(j==i)
				dp[i][j] += dp[i-1][j-1];// 피라미드 기준 가장 오른쪽
			else
				dp[i][j] += (dp[i-1][j-1] >= dp[i-1][j] ? dp[i-1][j-1] : dp[i-1][j]);
			if(i == T-1)
				if(max < dp[i][j])
					max = dp[i][j];
			
		}
	}
	printf("%d\n",max);
	return 0;
}
