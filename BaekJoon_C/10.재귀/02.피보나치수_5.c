#include <stdio.h>
int pivo[2]={0,1};
int func_pivo(int n){
	int temp;
	if(n==0)
		return pivo[0];
	else if(n==1)
		return pivo[1];
	else{
		temp=pivo[0]+pivo[1];
		pivo[0]=pivo[1];
		pivo[1]=temp;
		return func_pivo(n-1);
	}
}

int main(){
	int n;

	scanf("%d",&n);
	
	printf("%d\n",func_pivo(n));

	return 0;
}
