#include <stdio.h>

int main(){
	int X,cnt=1;
	scanf("%d",&X);

	if(X==1){
		printf("1/1");
		return 0;
	}

	while(X-cnt>0){
		X-=cnt;
		cnt++;
	}
	cnt++;
	if((cnt-1)%2)
		printf("%d/%d",cnt-X,X);
	else
		printf("%d/%d",X,cnt-X);
	return 0;
}
