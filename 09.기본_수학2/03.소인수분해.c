#include <stdio.h>

int main(){
	int N;
	int div=2;
	scanf("%d",&N);

	while(1){
		if(N%div==0){
			printf("%d\n",div);
			N/=div;
		}
		else if(N==1)
			break;
		else if(N%div!=0)
			div++;
	}
	return 0;
}
