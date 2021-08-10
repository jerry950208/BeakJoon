/*
	포도주시식
	두가지 규칙이 있다
	1. 포도주 잔을 선택하면 그 잔에 들어있는 포도주는 모두 마셔야 하고, 마신후에는 원래위치에 다시 놓아야한다

	2.연속으로 놓여있는 3잔을 모두 마실 수는 없다

	최대로 많은 양의 포도주를 마실수 있는 포도주의 양을 출력한다
*/
#include <stdio.h>

int Wine[10001], Dp[10001];
int bigFinder(int a, int b){
	return a > b ? a : b;
}

int main(void){
	
	int N;
	scanf("%d",&N);

	for(int i=1; i<=N; i++)
		scanf("%d",&Wine[i]);

	Dp[1] = Wine[1];
	Dp[2] = Wine[1] + Wine[2];

	for(int i=3; i<=N; i++)
		Dp[i] = bigFinder(Dp[i-2] + Wine[i], bigFinder(Dp[i-3] + Wine[i-1] + Wine[i], Dp[i-1]));

	printf("%d\n",Dp[N]);
	return 0;
}
