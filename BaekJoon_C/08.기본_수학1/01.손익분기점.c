#include <stdio.h>

int main(){
	int A,B,C;
	int x;
	scanf("%d %d %d",&A,&B,&C);
	
	x=A/(C-B)+1;
	
	if(C<=B)
	printf("-1");
	else
	printf("%d",x);
	
	return 0;
}
