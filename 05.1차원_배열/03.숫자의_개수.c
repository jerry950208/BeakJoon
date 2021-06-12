#include <stdio.h>
int arr[10];
int main(){

	int A,B,C,mul;
	scanf("%d %d %d",&A,&B,&C);
	mul=A*B*C;
	
	while(1){
		if(mul==0)
			break;
		else{
		arr[mul%10]+=1;
		mul/=10;
		}
	
	}

	for(int i=0;i<10;i++)
	printf("%d\n",arr[i]);
	return 0;
}
