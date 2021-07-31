/*
	이항계수
	자연수 N과 정수 K가 주어졌을때 이항계수를 구하는 프로그램을 작성
	
	nCk 을 구하는 문제
*/
#include <stdio.h>

int func_Factorial(int num);
int func_Combination(int N, int K);

int main(){
	
	int N,K;
	scanf("%d %d",&N, &K);
	
	printf("%d\n",func_Combination(N,K));
	
	return 0;
}

int func_Factorial(int num){
	
	if(num == 1)
		return 1;
	
	int output = 1;
	for(int i=2; i<=num; i++){
		output *= i;
	}
	return output;
}

int func_Combination(int N, int K){
	
	return func_Factorial(N) / (func_Factorial(K) * func_Factorial(N-K));
}
