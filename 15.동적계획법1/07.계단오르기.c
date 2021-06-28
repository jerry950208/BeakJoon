#include <stdio.h>

int big(int a, int b){
	return a > b ? a : b;
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n+1];
	int dp[n+1];

	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	dp[0] = arr[0];
	dp[1] = big(arr[0], arr[0]+arr[1]);
	dp[2] = big(arr[1] + arr[2], arr[0] + arr[2]);
	for(int i=3; i<n; i++)
		dp[i]=big(arr[i] + dp[i-2], arr[i] + arr[i-1] + dp[i-3]);
	
	printf("%d\n",dp[n-1]);
	return 0;
}
