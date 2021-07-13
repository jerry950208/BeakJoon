
#include <stdio.h>

int main(){
	int n,A,B;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	scanf("%d %d",&A,&B);
	printf("Case #%d: %d + %d = %d\n",i,A,B,A+B);
	}	
	return 0;
}
