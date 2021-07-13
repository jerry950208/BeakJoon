#include <stdio.h>

int main(){
	int N,cnt=1;
	int min=2,max=7;
	scanf("%d",&N);
	
	while(1){
		if(N>=min && N<=max){
			cnt++;
			break;
		}
		if(N==1){
			break;
		}
		
		else{
			cnt++;
			min+=(cnt-1)*6;
			max+=cnt*6;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
