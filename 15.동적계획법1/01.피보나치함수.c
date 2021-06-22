#include <stdio.h>

int fivo(int n){
	if(n ==0){
		printf("0\n");
		return 0;
	}
	else if(n==1){
		printf("1\n");
		return 1;
	}
	else
		return fibo(n-1) + fibo(n-2);
}

int main(){
	int n;
	scanf("%d",&n);

	fibo(n);
	return 0;
}
