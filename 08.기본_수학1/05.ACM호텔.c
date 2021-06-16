#include <stdio.h>

int main(){
	int input;
	int H,W,N;

	scanf("%d",&input);
	for(int i=0; i<input; i++){
		scanf("%d %d %d",&H,&W,&N);
		if(N%H == 0)
			printf("%d%.2d\n",H,N/H);
		else
			printf("%d%.2d\n",N%H,N/H+1);
	}
	return 0;
}
