/*
	N과 M(1)
	자연수 N과 M이 주어졌을때 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램
	- 1부터 N까지 자연수중에서 중복없이 M개를 고른 수열
*/
#include <stdio.h>

int N,M;
int result[9],check[9];

void func_sqc(int k){
	if(k == M){
		for(int i=0; i<M; i++)
			printf("%d ",result[i]);
		printf("\n");
	}

	else{
		for(int i=1; i<=N; i++){
			if(check[i] == 0){
				result[k] = i;
				check[i] = 1;
				func_sqc(k+1);
				check[i] = 0;
			}
		}
	}
}

int main(){
	
	scanf("%d %d",&N ,&M);
	func_sqc(0);

	return 0;
}
